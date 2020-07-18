// #include <stdio.h>
// void print(int);
// int main()
// {
//     print();
//     return 0;
// }
// void print()
// {
    
//     for(int b=0; b<3; b++)
//     {
//         scanf("%d", &a);
//         for (int i = 0; i < a; i++)
//         {
//             printf("%d", i);
//         }
//         printf("\n");
    
// }



/*
#include <stdio.h>
int main()
{
    while(1)
    {
        printf("시발 어떤 병신이 족보 쳐 들고다니셨어요?\n");
        continue;
    }
}
*/




/* #include <stdio.h>

int main()
{
    int a=1;
    int *p=&a;
    printf("%d", *p);
    a=3;
    printf(" %d", *p);
    return 0;
} */

/* #include<stdio.h>


int main()
{
    int a=3, b=4;
    printf("%d %d", &a, &b);
    return 0;
} */


/* #include <stdio.h>
int main()
{
    int a=3;
    printf("%d\n", &a);
    int *p=&a;
    printf("%d", *p);
} */


/* #include <stdio.h>
int main()
{
    int a,b;
    b=3;
    a=1;
    int *p=&a-1;
    printf("%d\n", a);
    printf("%d", p);
} */


/* #include <stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    printf("%d", *(p+1));
    return 0;
} */