/*#include <stdio.h>
int main()
{
int input;

printf("당신의 마이펫을 업그레이드하세요!\n");
printf("1. 밥주기\n");
printf("2. 놀아주기\n");
printf("3. 재우기\n");

scanf("%d", &input);

switch (input)
    {
    case 1:
    printf("아이 맛있어");
    break;

    case 2:
    printf("아이 신나\n");
    break;

    case 3:
    printf("zzz\n");
    break;

    default:
    printf("이게 뭔 개소리야\n");
    break;
    }
return 0;
}*/




#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    
    if (('A'<=a && a<='Z') | ('a'<=a && a<='z'))
    {   
        printf("Alphabet");
    }
    else if ('0'<=a && a<='9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
    
    return 0;
}