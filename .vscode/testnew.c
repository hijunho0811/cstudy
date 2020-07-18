#include <stdio.h>
#include <string.h>
int main()
{
    char word[10], wor[10];
    scanf("%s", word);
    for(int a=0; a<10; a++)
    {
        if(word[a]=='*')
            wor[a]='*';
        else
        {
            char sum='0';
            
            if((word[a-1]=='*') && (word[a+1]=='*'))
                sum='2';
            else if((word[a+1]=='*') || (word[a-1]=='*'))
                sum='1';
            wor[a]=sum;    
        }
        
    }
    for(int a=0; a<10; a++)
    {
        if(wor[a]=='0')
            wor[a]='_';
    }
    for(int a=0; a<10; a++)
    {
        printf("%c", wor[a]);
    }
    return 0;
}