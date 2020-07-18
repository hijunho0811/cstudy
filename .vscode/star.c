//정사각형 별찍기
/******************************
#include <stdio.h>
int main()
{
    int a, b, n;
    scanf("%d", &n);
    for(a=1; a<=n; a++)
    {
        for(b=1; b<=n; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*******************************/



//왼쪽정렬 직각삼각형
/********************************
#include <stdio.h>
int main()
{
    int a, b, n;
    scanf("%d", &n);
    for(a=1; a<=n; a++)
    {
        for(b=1; b<=a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*********************************/



//뒤집고 왼쪽정렬
/********************************
#include <stdio.h>
int main()
{
    int a, b, n;
    scanf("%d", &n);
    for(a=n; a>=1; a--)
    {
        for(b=1; b<=a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
**********************************/

/**********************************
#include <stdio.h>
int main()
{
    int a, b, n;
    scanf("%d", &n);
    for(a=n; a>=0; a--)
    {
        for(b=a; b>=0; b--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
??????????????????????????????
******************************/

//오른쪽 정렬 직각삼각형
/*****************************
#include <stdio.h>
int main()
{
    int a, b, n;
    scanf("%d", &n);
    for(a=1; a<=n; a++)
    {
        for(b=1;b<=n-a;b++)
        {
            printf(" ");
        }
        for(b=1; b<=a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*************************************/

//오른쪽 정렬 역삼각형
/***********************************
#include <stdio.h>
int main()
{
    int a, b, n;
    scanf("%d", &n);
    for(a=n; a>=1; a--)
    {
        for(b=1; b<=n-a; b++)
        {
            printf(" ");
        }
        for(b=1; b<=a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*******************************/

/*
#include <stdio.h>
int main()
{
    int a, b, n;
    scanf("%d", &n);
    for(a=1; a<=n; a++)
    {
        for(b=1; b<=n-a; b++)
        {
            printf(" ");
        }
        for(b=1; b<=a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*****************************
#include <stdio.h>
int main()
{
    int a, b, n;
    scanf("%d", &n);
    for(a=n; a>=1; a--)
    {
        for(b=1; b<=n-a; b++)
        {
            printf(" ");
        }
        for(b=1; b<=a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
****************************/


/*
#include <stdio.h>
int main()
{
    int n, d, b=1;
    scanf("%d", &n);
    d=2*n-1;
    for(int a=1; a<=n-1; a++)
    {
        for(b=1; b<=d; b++)
        {
            if(a<b || b<d-a)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}*/


#include <stdio.h>
int main()
{
    int a=0, b=0, c=0, d=0;
    char ch;
    while(1)
    {
        scanf("%c", &ch);
        if('A'<=ch && ch<='Z')
            a++;
        else if('a'<=ch && ch<='z')
            b++;
        else if('!'<=ch && ch<='/')
            c++;
        else if('0'<=ch && ch<='9')
            d++;
        else
            break;
        getchar();
    }
    printf("%d %d %d %d", a, b, c, d);
    return 0;
}