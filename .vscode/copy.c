#include <stdio.h>
int main()
{
    int column = 5;
    int row = column;
 
    //위쪽 삼각형
    for (int i = 1; i <= column; i++)
    {
        //1번 부분
        for (int j = row-i; j > 0; j--)
        {
            printf("0");
        }
        for (int k = 0; k < i; k++)
        {
            printf("*");
        }
 
        //2번 부분
        for (int k = 0; k < i-1; k++)
        {
            printf("*");
        }
        for (int j = (row - i); j > 0; j--)
        {
            printf("0");
        }
    
        printf("\n");
    }
 
    //아래쪽 삼각형
    for (int i = 1; i <= column-1; i++)
    {
        //3번 부분
        for (int j = 0; j < i; j++)
        {
            printf("0");
        }
        for (int k = (row - i); k > 1; k--)
        {
            printf("*");
        }
 
        //4번 부분
        for (int k = i; k < row; k++)
        {
            printf("*");
        }
        for (int j = 0; j < i; j++)
        {
            printf("0");
        }
 
        printf("\n");
    }
 
    return 0;
}
