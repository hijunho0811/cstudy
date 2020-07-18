/*
#include <stdio.h>
int main()
{
    int a;
    char string[11]="Hello World";
    for(a=12; a>=0; a--)
    {
        printf("%c", string[a]);
    }
    return 0;

}
*/


/*
#include <stdio.h>
int main()
{
    long long fib[], n, a;
    fib[0]=0;
    fib[1]=1;
    scanf("%lld", &n);
    for(a=0; a<=n; a++)
    {
        fib[0]=0;
        fib[1]=1;
#in        fib[a] = fib[a-1] + fib[a-2];
        printf("%d", fib[a]);
    }
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int a, b;
    char str[10];
    scanf("%s", str);
    for(a=0; a<10; a++)
    {
        if(str[a]=='z')
        {
            printf("%c", str[a]);
            break;
        }
        else
        {
            printf("%c", str[a]);
        }
    }
    return 0;
}*/


#include <stdio.h>
int main()
{
    char str[100], str1[100];
    int leng=0;
    for(int i=0; i<100; i++)
    {
        scanf("%c", &str[i]);
        if(str[i]=='#')
            break;
        leng++;
    }
    if(arr[i]!=arr1)
}