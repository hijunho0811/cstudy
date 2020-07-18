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

void FileEncoding();
void FileDecoding();

void print()
{
   printf("\n\n");
   printf("   ===========================================================================================\n");
   printf("   ===        =====  ==============  ====  =========  ===================  ==================\n");
   printf("   ===  ===========  ==============  ====  =========  ===================  ==================\n");
   printf("   ===  ===========  ==============  ====  =========  ===================  ==================\n");
   printf("   ===  =======  ==  ===   ========  ====  ==    ===  ===   ====   ======  ===   ===  =   ===\n");
   printf("   ===      =======  ==  =  =======  ====  ==  =  ==  ==     ==  =  ===    ==  =  ==    =  ==\n");
   printf("   ===  =======  ==  ==     =======  ====  ==  =  ==  ==  =  =====  ==  =  ==     ==  =======\n");
   printf("   ===  =======  ==  ==  ==========  ====  ==    ===  ==  =  ===    ==  =  ==  =====  =======\n");
   printf("   ===  =======  ==  ==  =  =======   ==   ==  =====  ==  =  ==  =  ==  =  ==  =  ==  =======\n");
   printf("   ===  =======  ==  ===   =========      ===  =====  ===   ====    ===    ===   ===  =======\n");
   printf("   ===========================================================================================\n");
}

void game()
{
   int Com_Play, User_Play, scores = 0, number = 0;
   int win = 0, lose = 0, draw = 0;

   printf("\n\n");
   printf("   :::::::::    ::::::::   :::::::::      ::::::::       :::      ::::    ::::   ::::::::::\n");
   printf("   :+:    :+:  :+:    :+:  :+:    :+:    :+:    :+:    :+: :+:    +:+:+: :+:+:+  :+:\n");
   printf("   +:+    +:+  +:+         +:+    +:+    +:+          +:+   +:+   +:+ +:+:+ +:+  +:+\n");
   printf("   +#++:++#:   +#++:++#++  +#++:++#+     :#:         +#++:++#++:  +#+  +:+  +#+  +#++:++#\n");
   printf("   +#+    +#+         +#+  +#+           +#+   +#+#  +#+     +#+  +#+       +#+  +#+\n");
   printf("   #+#    #+#  #+#    #+#  #+#           #+#    #+#  #+#     #+#  #+#       #+#  #+#\n");
   printf("   ###    ###   ########   ###            ########   ###     ###  ###       ###  ##########\n\n");

   if (number > 0)
      printf("score : %d\n", scores);         //점수 출력
   srand(time(NULL));
   Com_Play = rand() % 3 + 1;                   //난수 저장(1, 2, 3)
   printf("\n   1.가위  2.바위  3.보 선택 : ");      // 메뉴
   while (1)
   {
      scanf("%d", &User_Play);               //1, 2, 3중 입력받음   
      if (User_Play != 1 && User_Play != 2 && User_Play != 3) {   //1, 2, 3외의 값을 입력하면 다시 입력
         printf("   다시 입력해주세요.\n\n");
         continue;
      }
      if (User_Play == 1 && Com_Play == 1) {
         printf("   User : 가위\nComputer :가위\n비겼습니다.\n\n");
         continue;
      }
      else if (User_Play == 1 && Com_Play == 2) {
         printf("   User : 가위\nComputer : 바위\n졌습니다!\n\n");
         break;
      }
      else if (User_Play == 1 && Com_Play == 3) {
         printf("   User : 가위\nComputer : 보\n이겼습니다!!\n\n");
         FileDecoding();
      }
      else if (User_Play == 2 && Com_Play == 1) {
         printf("   User : 바위\nComputer : 가위\n이겼습니다!!\n\n");
         FileDecoding();
      }
      else if (User_Play == 2 && Com_Play == 2) {
         printf("   User : 바위\nComputer : 바위\n비겼습니다\n\n");
         continue;
      }
      else if (User_Play == 2 && Com_Play == 3) {
         printf("   User : 바위\nComputer : 보\n졌습니다!\n\n");
         break;
      }
      else if (User_Play == 3 && Com_Play == 1) {
         printf("   User : 보\nComputer : 가위\n졌습니다!\n\n");
         break;
      }
      else if (User_Play == 3 && Com_Play == 2) {
         printf("   User : 보\nComputer : 바위\n이겼습니다!!\n\n");
         FileDecoding();
      }
      else {
         printf("   User : 보\nComputer : 보\n비겼습니다.\n\n");
         continue;
      }
   }
}

void game2(){
   int m,n,k,a,nansu1,nansu2,i,right;
   bool mcheck=0,ncheck=0;
         
   printf("\n\n");
   printf("       :::    ::: :::::::::      :::::::        :::::::::   ::::::::  :::       ::: ::::    :::       ::::::::\n");
   printf("       :+:    :+: :+:    :+:    :+:   :+:       :+:    :+: :+:    :+: :+:       :+: :+:+:   :+:      :+:    :+: \n");
   printf("       +:+    +:+ +:+    +:+     +:+ +:+        +:+    +:+ +:+    +:+ +:+       +:+ :+:+:+  +:+            +:+  \n");
   printf("       +#+    +:+ +#++:++#+       +#++:  ++#    +#+    +:+ +#+    +:+ +#+  +:+  +#+ +#+ +:+ +#+          +#+    \n");
   printf("       +#+    +#+ +#+            +#+ +#+#+#     +#+    +#+ +#+    +#+ +#+ +#+#+ +#+ +#+  +#+#+#        +#+      \n");
   printf("       #+#    #+# #+#           #+#   #+#+      #+#    #+# #+#    #+#  #+#+# #+#+#  #+#   #+#+#       #+#       \n");
   printf("        ########  ###            ##########     #########   ########    ###   ###   ###    ####      ########## \n\n\n");
                                                             
      do{
         srand((int)time(NULL));
         nansu1=rand() % 51;
         nansu2=rand() % 51;
      }while(nansu1==nansu2);
   
   for(i=0;i<6;i++){
      if(!mcheck&&!ncheck) {
         printf("   Please enter two numbers >> ");
         scanf("%d %d",&m,&n);
      }
      else if(mcheck){
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 14);
         printf("   Left correct!! ");
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7);
         printf("Please enter rest numbers >> ");
         scanf("%d",&n);
      }
      else if(ncheck){
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 14);
         printf("   Right correct!! ");
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7);
         printf("Please enter rest numbers >> ");
         scanf("%d",&m);
      }
      if(n>50||n==0||m>50||m==0){
         printf("   Out of range. again >> ");
         i--;
         continue;
      }
      
      if(!mcheck)
      {
         if(m>nansu1){
            printf("\n   Down↓ ");
         }
         else if(m<nansu1){
            printf("\n   Up↑ ");
         }
         else
            mcheck=1;
      }
      if(mcheck){
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 14);
         printf("\n   Correct! ");
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7);
      }
      if(!ncheck){
         if(n>nansu2){
            printf("   Down↓ \n\n");
         }
         else if(n<nansu1){
            printf("   Up↑ \n\n");
         }
         else
            ncheck=1;
      }
      if(ncheck){
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 14);
         printf("   Correct! \n\n");
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7);
      }
      if(mcheck&&ncheck){
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
         printf("   You got right answer! get the answer in %d Time!!\n",i+1);  
          break;
      }         
   }
   if(i==6)
    printf("\n\n   d888888b d8888b. d888888b  .d88b.  d888888b     db       .d88b.  db      \n");
   printf("     `88'   88  `8D   `88'   .8P  Y8. `~~88~~'     88      .8P  Y8. 88      \n");
      printf("      88    88   88    88    88    88    88        88      88    88 88      \n");
     printf("      88    88   88    88    88    88    88        88      88    88 88      \n");
   printf("     .88.   88  .8D   .88.   `8b  d8'    88        88booo. `8b  d8' 88booo. \n");
   printf("   Y888888P Y8888D' Y888888P  `Y88P'     YP        Y88888P  `Y88P'  Y88888P \n");
   SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7);
}

void game3(){
   int Com_num[3] = { 0 }, User_input[3];
   int ball = 0, strike = 0;

   printf("\n\n");
   printf("        :::::::::      :::      ::::::::  ::::::::::      :::::::::      :::     :::        :::          \n");
   printf("        :+:    :+:   :+: :+:   :+:    :+: :+:             :+:    :+:   :+: :+:   :+:        :+:          \n");
   printf("        +:+    +:+  +:+   +:+  +:+        +:+             +:+    +:+  +:+   +:+  +:+        +:+          \n");
   printf("        +#++:++#+  +#++:++#++: +#++:++#++ +#++:++#        +#++:++#+  +#++:++#++: +#+        +#+          \n");
   printf("        +#+    +#+ +#+     +#+        +#+ +#+             +#+    +#+ +#+     +#+ +#+        +#+          \n");
   printf("        #+#    #+# #+#     #+# #+#    #+# #+#             #+#    #+# #+#     #+# #+#        #+#          \n");
   printf("        #########  ###     ###  ########  ##########      #########  ###     ### ########## ##########   \n\n\n\n");

   srand((unsigned int)time(NULL));

   while (1) {
      Com_num[0] = rand() % 10;
      Com_num[1] = rand() % 10;
      Com_num[2] = rand() % 10;

      if (Com_num[0] == Com_num[1] || Com_num[0] == Com_num[2] || Com_num[1] == Com_num[2])
         continue;
      else
         break;
   }

   for (int k = 0; k < 5; k++) {
      printf("   ENTER THE NUMBER >> ");

      for (int i = 0; i < 3; i++)
         scanf("%d", &User_input[i]);

      for (int i = 0; i < 3; i++) {
         if (User_input[i] == Com_num[i])
            strike++;
         else {
            for (int j = 0; j < 3; j++) {
               if (User_input[i] == Com_num[j])
                  ball++;
            }
         }
     }
      if (strike == 3) {
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
         printf("   HOME RUN!!\n\n");
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7);
         break;
      }
      else if (strike == 0 && ball == 0)
      {
          SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 12);
         printf("\n   Out\n\n");
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7);
      }
      else {
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 14);
         printf("\n   %dS ",strike);
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 9);
       printf("%dB\n\n",ball);
       SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7);
         strike = 0;
         ball = 0;
      }
   }  
   printf("\n\n   d888888b d8888b. d888888b  .d88b.  d888888b     db       .d88b.  db      \n");
   printf("     `88'   88  `8D   `88'   .8P  Y8. `~~88~~'     88      .8P  Y8. 88      \n");
   printf("      88    88   88    88    88    88    88        88      88    88 88      \n");
   printf("      88    88   88    88    88    88    88        88      88    88 88      \n");
   printf("     .88.   88  .8D   .88.   `8b  d8'    88        88booo. `8b  d8' 88booo. \n");
   printf("   Y888888P Y8888D' Y888888P  `Y88P'     YP        Y88888P  `Y88P'  Y88888P \n");                                                                                                                                   
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void init(int *Card);
void cardSet(int *DealerC,int *PlayerC, int *Card);
int gameStart(int *DealerC,int *PlayerC);
int cardPrt(int *Card, int *i, int *Aa);
void GameFinish(int gameSet);


void game4()
{
int Card[52];
int DealerC[10],PlayerC[10];
int gameSet = 0, i = 0;

while(1)
{
   init(Card);                        // 덱을 짭니다. 
   cardSet(DealerC,PlayerC,Card);         // 플레이어에게 카드 배분 
   gameSet = gameStart(DealerC,PlayerC);      // 블랙잭 시작 
   GameFinish(gameSet);                  // 블랙잭 종료 
   
   printf("\n\n1. 한번 더 / 2. 종료 : ");
   scanf("%d",&i);
   if(i == 2){
      printf("퇴장합니다.\n");
      break;
   } 
   else if(i!=1){
      printf("다시 입력하세요.\n");
      printf("\n\n1. 한번 더 / 2. 종료 : ");
      scanf("%d",&i);
   }
   system("cls");
   }
}

void init(int *Card)
{
   // 카드 랜덤 셋팅
   int w = 0,r = 0;
   int swit[52];
   for(int i = 0; i < 52; i++) {
      swit[i] = false;
   }

   srand(time(NULL));
   while(w < 52) {
      r = rand() % 52;
      if(swit[r] == false) {
         swit[r] = true;
         Card[w] = r + 1;
         w++;
      }
   }
}

void cardSet(int *DealerC,int *PlayerC, int *Card)
{
   for(int i = 0; i < 10; i++)
   {
      DealerC[i] = Card[i];
      PlayerC[i] = Card[i+10];
   }
}
int gameStart(int *DealerC,int *PlayerC)
{
   int i = 0,d = 0;
   int Aa = 0, Ab = 0, gg = 0; // A구분자 A가 있으면 1 없으면 0
   int HS, Cnt = 2,Dsum = 0, Psum = 0;
   int GameSet = -1;

    //블랙잭 시작 
   printf("\n\n");
   printf("   :::::::::  :::          ::::::      ::::::::  :::   :::          :::     ::::::      ::::::::  :::   :::\n");
   printf("   :+:    :+: :+:         :+:  :+:    :+:        :+:  +:+           :+:    :+:  :+:    :+:        :+:  +:+\n");
   printf("   +:+    +:+ +:+         +:+  +:+   +:+         +:+ ::+            +:+    +:+  +:+   +:+         +:+ ::+\n");
   printf("   +#++:++#+  +#+        +#++::++#+  +#+         +#++:              +:+   +#++::++#+  +#+         +#++:\n");
   printf("   +#+    +#+ +#+        +#+    +#+  +#+         +#+ ::+      +#+   +#+   +#+    +#+  +#+         +#+ ::+\n");
   printf("   #+#    #+# #+#       #+#      #+#  #+#        #+#  #+#     #+#   #+#  #+#      #+#  #+#        #+#  #+#\n");
   printf("   #########  ######### ###      ###   ########  ###   ###     #######   ###      ###   ########  ###   ###\n\n\n");

   //카드 공개 
   printf("\n\n\n딜러 카드 공개 !!\n");
   Dsum = Dsum + cardPrt(DealerC,&d, &Ab);
   printf("???"); // 딜러 카드의 한개는 비공개 
    
   printf("\n\n\n플레이어 카드 공개 !!\n\n");
   Psum = Psum + cardPrt(PlayerC,&i, &Aa);
   Psum = Psum + cardPrt(PlayerC,&i, &Aa);

   while(1){
      printf("\nHit(1) or Stay(2) :: ");
      scanf("%d",&HS);
      if(HS == 1)
      {
         for(int j = 0; j < Cnt; ) 
            cardPrt(PlayerC,&j,&gg);
            
         Psum = Psum + cardPrt(PlayerC,&i, &Aa);
         Cnt++;
         if(Aa == 1 && Psum > 21){
            Psum = Psum - 10; // A가 있고 21이 넘으면 -10;
            Aa = 0;
         }   
         if(Psum == 21){
            GameSet = 1;
            printf("\n///////////////////\n플레이어 블랙잭!!\n///////////////////\n");
            break;
         }
         
         if(Psum > 21)
         {
            GameSet = -1;
            break;
         }
      }
      else{ 
         break; 
      }  
   }
   printf("\n\n\n딜러 카드 공개 !!\n");
   
   int Cnt2=1;
   for(int j=0; j<Cnt2;){
      cardPrt(DealerC,&j, &Ab);
      Dsum = Dsum + cardPrt(DealerC,&j, &Ab);
      Cnt2++;
   }
   if(Dsum < Psum && Psum <= 21){
      Dsum = Dsum + cardPrt(DealerC,&d, &Ab);
      if(Dsum > 21) GameSet = 1;
   }
   if(Ab == 1 && Dsum > 21){
      Dsum = Dsum - 10; // A가 있고 21이 넘으면 -10;
      Ab = 0;
   }
   if(Dsum == 21){
      printf("\n///////////////////\n딜러 블랙잭!!\n///////////////////\n");
      GameSet = -1;
   }
   // 승,패,무승부 
   if(Psum == Dsum) 
      GameSet = 0;
   if(Psum > Dsum && Psum <=21) 
      GameSet = 1;      
   return GameSet;
}

int cardPrt(int *Card, int *i, int *Aa)
{
   int pattern, num ,Snum;
   
   pattern = (Card[*i]-1) / 13;
   
   switch(pattern){      // 문양 정하기 
      case 0 :
         printf("♠ ");
         break;
      case 1 :
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 12);
         printf("◆ ");
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7);
         break;
      case 2 :
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 12);
         printf("♥ ");
         SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7);
         break;
      case 3 :
         printf("♣ ");
         break;
   }

   //숫자 및 알파벳 구분
   num = (Card[*i] - 1) % 13;
   
   switch(num){
      case 0 :
         printf("A \t");
         Snum = 11;
         *Aa = 1;
         break;
      case 10:
         printf("J \t");
         Snum = 10;
         break;
      case 11:
         printf("Q \t");
         Snum = 10;
         break;
      case 12:
         printf("K \t");
         Snum = 10;
         break;            //A는 1또는 11로, J,Q,K는 모두 10으로 간주. 
      default:
         printf("%d \t",num + 1);
         Snum = num+1;               // 숫자일 때 출력 
   }
   *i  = *i + 1;
   return Snum;
}

void GameFinish(int gameSet)
{
   if (gameSet == 1)
   {
      printf("\n\n//////////////\n");
      printf("플레이어 승리 !!!\n");
      printf("//////////////\n\n");
   } 
   else if (gameSet == -1)
   {
      printf("   d888888b d8888b. d888888b  .d88b.  d888888b     db       .d88b.  db      \n");
      printf("     `88'   88  `8D   `88'   .8P  Y8. `~~88~~'     88      .8P  Y8. 88      \n");
      printf("      88    88   88    88    88    88    88        88      88    88 88      \n");
      printf("      88    88   88    88    88    88    88        88      88    88 88      \n");
      printf("     .88.   88  .8D   .88.   `8b  d8'    88        88booo. `8b  d8' 88booo. \n");
      printf("   Y888888P Y8888D' Y888888P  `Y88P'     YP        Y88888P  `Y88P'  Y88888P \n\n");
      printf(" d888888888b   d8     8b  d8    8b       d8                             88b\n");
      printf(" ~~~~~~~~88b    d88 8b     d88 8b       d8   d88b              d88b      88b\n");
      printf("         88D       8888b     8888b     d8   d8  8b  d888888b  d8  8b      88b\n");
      printf(" d888888888b        d8        d8       d8           d8    8b              88b\n");
      printf(" ~~~~~~~~88D       8888b     8888b     d8           d8    8b              88b\n");
      printf("         88b    d88 8b     d88 8b       d8           d8  8b              88b\n");
      printf("         88p   d8     8b  d8    8b       d8           d88b              88P\n");
   }
   else
   {
      printf("\n\n//////////////\n");
      printf("무승부 !!!\n");
      printf("//////////////\n\n");
   }
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
         //system("cls");
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

int main()
{
   print();
   //FileEncoding();
   int random;
   
   srand(time(NULL));
   random = rand()%4;
   if(random==0)
      game();
   else if(random==1)
      game2();
   else if(random==2)
      game3();
   else if(random==3)
      game4();
      
   return 0;
}