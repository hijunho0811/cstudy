/*getchar, putchar=scanf

#include <stdio.h>
int main()
{
    char a=getchar( );
    printf("you entered:%c", a);
    return 0;
}

code returns only one character*/





/*store in char array, gets() function

#include <stdio.h>
int main()
{
    char a[100];
    
    gets(a);

    printf("You entered: %s", a);
    
    return 0;
}

returns more than one char, returns string*/



//null-terminated string
/*#include <stdio.h>
int main()
{
    char null_1='\0';
    char null_2=0;
    char null_3=(char)NULL ;
    printf("%d %d %d", null_1, null_2, null_3);
    return 0;
}*/


/* #include <stdio.h>
int main()
{
    char word[1000];
    scanf("%s", word);
    char *str=word;

    printf("%s", str);
    return 0;
}
 */

/* 
#include <stdio.h>
int str_length(char *str);
int main()
{
    int n;
    char str[n];
    scanf("%s", str[n]);

    printf("%d", str_length(str));
    return 0;
}
int str_length(char *str)
{
    int i=0;
    while (str[i])
    {
        i++;
    }

    return i;
} */

/* 
#include <stdio.h>
int str_length(char *str);
int main() {
  char str[] = {"What is your name?"};

  printf("이 문자열의 길이 : %d \n", str_length(str));

  return 0;
}
int str_length(char *str) {
  int i = 0;
  while (str[i]) {
    i++;
  }

  return i;
}

 */
//null input, cnt ++ stop

