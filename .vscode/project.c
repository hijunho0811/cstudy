#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#pragma warning(disable:4996)
#define score 10

char Type[27];
char NameType[27]="LOCK.6wh";
char DeCodNameType[27];

void Menu();
void FileEncoding();
void FileDecoding();
void game();


int main()
{
   Menu();
   game();
}

void game()
{
   int Com_Play, User_Play, scores = 0, number = 0;
   int win = 0, lose = 0, draw = 0;

   printf("================================================\n");
   printf("               가위바위 보 게임                 \n");
   printf("================================================\n");

   if (number > 0)
      printf("score : %d\n", scores);         //점수 출력
   srand(time(NULL));
   Com_Play = rand() % 3;                  //난수 저장(0, 1, 2)
   printf("0.가위  1.바위  2.보 선택 : ");      // 메뉴
   while(1)
   {
      scanf("%d", &User_Play);               //0, 1, 2중 입력받음   
      if (User_Play != 0 && User_Play != 1 && User_Play != 2) {   //0, 1, 2외의 값을 입력하면 다시 입력
         printf("다시 입력해주세요.\n\n");
         continue;
      }
      if (User_Play == 0 && Com_Play == 0) {
         printf("User : 가위\nComputer :가위\n비겼습니다.\n\n");    
         continue;
      }
      else if (User_Play == 0 && Com_Play == 1) {
         printf("User : 가위\nComputer : 바위\n졌습니다!\n\n");    
         break;
      }
      else if (User_Play == 0 && Com_Play == 2) {
         printf("User : 가위\nComputer : 보\n이겼습니다!!\n\n");
         FileDecoding();
      }
      else if (User_Play == 1 && Com_Play == 0) {
         printf("User : 바위\nComputer : 가위\n이겼습니다!!\n\n");
         FileDecoding();
      }
      else if (User_Play == 1 && Com_Play == 1) {
         printf("User : 바위\nComputer : 바위\n비겼습니다\n\n");
         continue;
      }
      else if (User_Play == 1 && Com_Play == 2) {
         printf("User : 바위\nComputer : 보\n졌습니다!\n\n");
         break;
      }
      else if (User_Play == 2 && Com_Play == 0) {
         printf("User : 보\nComputer : 가위\n졌습니다!\n\n");
         break;
      }
      else if (User_Play == 2 && Com_Play == 1) {
         printf("User : 보\nComputer : 바위\n이겼습니다!!\n\n");
         FileDecoding();
      }
      else {
         printf("User : 보\nComputer : 보\n비겼습니다.\n\n");
         continue;
      }
   }
}
void Menu()
{
   //printf("입력 : ");
   FileEncoding();
}
void FileEncoding()
{
   FILE * FileCreat = NULL;
   int File;
   system("cls");
   printf("※ 확장자 까지 입력하여 주셔야 합니다.\n");
   //getchar();
      for (;;)
      {
         printf("암호화 할 파일을 입력 해 주십시오 : ");
         gets(Type);
         FileCreat = fopen(Type, "rb");
         if (FileCreat == NULL)
         {
            printf("\n파일이 존재하지 않습니다.\n");
            continue;
         }
         else
         {
            FILE * CreatFile;
            CreatFile = fopen(NameType, "wb");
            while ((File = fgetc(FileCreat)) != EOF)
            {
               File ^= 13;
               printf(".");
               fputc(File, CreatFile);
            }
            fclose(CreatFile);
            fclose(FileCreat);
            remove(Type);
            printf("\n\n암호화 완료! 프로그램을 종료 합니다\n");
            break;
         }
      
      
      }
}
void FileDecoding()
{
   FILE * DeCodFileCreat = NULL;
   int File;
   char DeType[27];
   system("cls");
   printf("※ 확장자 까지 입력하여 주셔야 합니다.\n");
   getchar();
   for (;;)
   {
      printf("복호화 할 파일을 입력 해 주십시오 : ");
      //gets(DeType);
      DeCodFileCreat = fopen(NameType, "rb");
      if (DeCodFileCreat == NULL)
      {
         printf("\n파일이 존재하지 않습니다.\n");
         continue;
      }
      else
      {
         FILE * DeCodCreatFile;
         //printf("\n생성 될 파일명을 적어주세요 : ");
         strcpy(DeCodNameType,Type);
         DeCodCreatFile = fopen(DeCodNameType, "wb");
         while ((File = fgetc(DeCodFileCreat)) != EOF)
         {
            File ^= 13;
            printf(".");
            fputc(File, DeCodCreatFile);
         }
         fclose(DeCodCreatFile);
         remove(NameType);
         printf("\n\n복호화 완료! 프로그램을 종료 합니다\n");
         break;
      }
   }
   fclose(DeCodFileCreat);
}