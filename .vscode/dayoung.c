// #include <stdio.h>
// int main()
// {
//     int time, minute, second;
//     printf("초를 입력하세요: ");
//     scanf("%d", &second);
//     printf("%d초는 ", second);
//     time= second / 3600;
//     minute = second %3600 / 60;
//     second = second % 60;
    
//     if(time !=0)
//         printf("%d시간 ", time);
//     if(minute != 0)
//         printf("%d분 ", minute);
//     if(second != 0)
//         printf("%d초 ", second);
//     printf("입니다.");
//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char j, k, i;
    int cnt = 0;

    printf("문자열 입력: ");
    gets(str);

    for (j = 'a'; j <= 'z'; j++)
    {
        printf("%c ", j);

    }

    printf("\n");

    for(j='A'; j<='Z'; j++)
    {
        while (str[i] =! NULL)
        {
            if(str[i] == j || str[i]==j+32)
            {
                cnt++;
                printf("%d ", cnt);
                cnt=0;
            }
        }
    }
}   

