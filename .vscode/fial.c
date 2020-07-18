#include <stdio.h>
#include <string.h>

void menu1(char dic[][2][64]){
   
   int j=0;
   while(dic[j][0][0] != '\0')j++;
   
   printf("한글입력: "); 
   gets(dic[j][0]);

   printf("영어입력: ");
   gets(dic[j][1]);

   for(int i=0; i<j; i++){
      if( strcmp(dic[j][1], dic[i][1]) == 0){
         printf("이미 존재하는 영어단어 입니다 ");
         dic[j][0][0] = '\0';
         break; 
      }
   }
   
}

void menu2(char dic[][2][64]){

    int i=0;
    char search[64];
   
    gets(search);
   
    for(i=0; dic[i][0][0] != '\0'; i++){
      if(strcmp(dic[i][0], search) == 0) puts(dic[i][1]);
      else 
      {
      printf("존재하지 않는 단어입니다.\n");
      break;
      }
   }
}

void menu3(char dic[][2][64]){

   int i=0, j=0;;
   
   while(dic[i][0][0] != '\0'){
      printf("\t");
      puts(dic[i][0]);
      printf("\t");
      puts(dic[i][1]);
      printf("\n");
      i++;
   }
}

int main(void){
   
   int i, menu, *words=0;
   char dic[1000][2][64];
   
   while(1){
      if(menu=='0')break;
      else if(menu=='1')menu1(dic);    //단어쌍 추가 
      else if(menu=='2')menu2(dic);   // 한국어 단어에 대한 영어 검색 
      else if(menu=='3')menu3(dic);   // 사전의 모든 단어쌍 출력 
      else printf("존재하지않는 메뉴입니다\n");   
   
   }
}