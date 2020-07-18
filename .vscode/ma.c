/* #include<stdio.h>
void main()
{
 char arr[100];
 int i, c=0, sum=0, k=1;

 printf("이진수 입력(0과 1만 입력): ");
 scanf("%s", arr);
 
 while(arr[c] != NULL)
  c++; //길이 구함

 for(i=c-1; i>=0; i--){
  if(arr[i]%2==0) //0은 아스키코드로 48 , 1은 49라는 점을 이용
   sum+=0;
  else{
    sum+=k;
  }
  k*=2;
 }
 
 printf("10진수로는 => %d\n", sum);
} */




/* #include <stdio.h>

int main()
{
    char barcode[7];
    int i, k=1, sum=0;
    scanf("%s", barcode);
    for(i=6; i>=0; i--){
        if(barcode[i]%2==0) 
            sum+=0;
        else{
            sum+=k;
        }
    k*=2;
    }
    printf("%d", sum);
    return 0;
}


 */




#include <stdio.h>
int main()
{
    char arr[999];
    scanf("%s", arr);
    for(int a=0; arr[a] != 0; a++)
}