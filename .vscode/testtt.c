#include<stdio.h>

void clearBuffer(void) 
{
   while (getchar() != '\n');
}
void menu1(char words[][2][64], int cnt);
void menu2(char words[][2][64], int cnt);
void menu3(char words[][2][64], int cnt);

int main()
{
   char m, words[1000][2][64];
   int cnt = 0;
      int i, j, k;

   while (1)
   {
      printf("메뉴를 고르세요 :");
      scanf("%c", &m);
      clearBuffer();
      switch (m)
      {
      case '0':
         return 0;
      case '1':
         menu1(words, cnt);
         cnt++;
         printf("------%d\n", cnt);
         break;
      case '2':
         menu2(words, cnt);
         break;
      case '3':
         menu3(words, cnt);
         break;
      default:
         break;
      }
   }
   return 0;
}

void menu1(char words[][2][64], int cnt)
{
   printf("새 단어를 추가해주십시오: \n");
   gets(words[cnt][0]);
   //puts(words[cnt][0]);
   gets(words[cnt][1]);
   //puts(words[cnt][1]);
}

void menu2(char words[][2][64], int cnt)
{
   char a[64];
   int i, j, inc;
   printf("검색할 단어를 입력하십시오...\n");
   gets(a);
   //puts(a);
   for (i = 0; i < cnt; i++)
   {
      inc = 0;
      //printf("cnt = %d\n", inc);
      for (j = 0; words[i][0][j] || a[j]; j++)
      {
         if (a[j] != words[i][0][j])
         {
            inc++;
            break;
         }
      }
      if (inc == 0)
      {
         printf("%d.\n", i+1);
         puts(words[i][0]);
         puts(words[i][1]);
         printf("\n");
      }
   }
}

void menu3(char words[][2][64], int cnt)
{
   int j;
   printf("사전의 단어를 출력합니다.\n");
   for (j = 0; j < cnt; j++)
   {
      printf("%d.\n", j + 1);
      puts(words[j][0]);
      puts(words[j][1]);
      printf("\n");
   }
