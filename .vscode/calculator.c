#include <stdio.h>
int main()
{
    int a, b;
    char op;
    while (1)
    {
        scanf("%d%c%d", &a, &op, &b);
        if(a==0 && op=='+' && b==0) break;
        switch(op)
        {
        case '+':
            printf("%d\n", a+b);
            break;
    
        case '-':
            printf("%d\n", a-b);
            break;

        case '*':
            printf("%d\n", a*b);
            break;

        case '/':
            printf("%lf\n", (double)a/(double)b);
            break;
    
        default:
            printf("연산기호를 모르겠습니다");
            break;
        }    
    }
    return 0;
}


