/*
#include <stdio.h>
  
int main(void){
      
    int n,m,k;
  
    scanf("%d", &n);
      
    m=(n+n%2)/2;                                                            //n의 중간값
      
    for(int i=0; i<n; i++)                                                   //n번동안 다음을 실행
    {   
        if(i<m)                                                              //다이아몬드의 아랫부분을 그리기 위해 k 정의
            k=i;
        else
            k=n-i-1;
        for(int j=1; j<=n; j++)
        {   
            if(j==m-k||j==m+k)                                                //j가 m-k 또는 m+k이면 '*'을 출력. 아니면 ' '을 출력-다이아몬드의 테두리에만 '*'을 출력
                printf("*");
            else
                printf(" ");
        }
        printf("\n");                                                          //줄바꿈
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int m, n, k, cd, a, b;
    scanf("%d %d %d", &m, &n, &k);
    if(m<=n)
    {
        a=m;
        b=n;
    }
    else
    {
        b=m;
        a=n;
    }
    for(cd=1; cd<=a; cd++)
    {
        if(a%cd==0 && b%cd==0)
        {
            printf("%d ", cd);
            k--;
            if(k==0)
            {
                break;
            }
        }
        else
        {
            continue;
        }
        
    }
    return 0;
    

}*/
/*
#include <stdio.h>
int main()
{
    double result;
    result=(float)10/4;

    printf("%lf", result);
    return 0;
}*/
/*
#include <stdio.h>
int main()
{
    int a=5, b=4, c=3;
    if(a<b<c)
    {
        printf("*");
    }
    else
    {
        printf("#");
    }
    return 0;
}78/
*/

#include <stdio.h>
int main()
{
    char a= 'b';
    printf("%d", &a);
    return 0;
}