/* #include <stdio.h>
#include <string.h>
int main()
{
    char input[100];
    int len, flag=1;
    scanf("%s", input);
    len=strlen(input);
    if(len<8 || len>15)
    {
        printf("invalid");
        return 0;
    }
    for(int a=0; a<len; a++)
    {
        if(input[a]>64 && input[a]<91)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("invalid");
        return 0;
    }
    flag=1;
    for(int a=0; a<len; a++)
    {
        if(input[a]>96 && input[a]<123)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("invalid");
        return 0;
    }
    flag=1;
    for(int a=0; a<len; a++)
    {
        if(input[a]>32 && input[a]<48)
        {
            flag=0;
            break;
        }
        else if(input[a]>57 && input[a]<65) 
        {
            flag=0;
            break;
        }
        else if(input[a]>90 && input[a]<97)
        {
            flag=0;
            break;
        }
        else if(input[a]>122 && input[a]<127)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("invalid");
        return 0;
    }
    flag=1;
    for(int a=0; a<len; a++)
    {
        if(input[a]>47 && input[a]<58)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("invalid");
        return 0;
    }
    else if(flag==0)
    {
        printf("valid");
        return 0;
    }

}
 */

                                                                                
                                                                                                                                   
/*                                                                                     
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ctg[n], num[n], food[n];
    for(int a=0; a<n; a++)
    {
        scanf("%d", &ctg[a]);
    }
    for(int a=0; a<n; a++)
    {
        scanf("%d", &num[a]);
    }
    for(int a=0; a<n; a++)
    {
        if(num[a]==0)
        {
            food[a]=100;
        }
        else{
            food[a]=ctg[a]/num[a];
        }
        
    }
    int min=food[0];
    for(int a=0; a<n; a++)
    {
        if(food[a]<min)
        {
            min=food[a];
        }
    }
    printf("%d", min);
    return 0;
}                                                                               
              */                                                                       

/* 
#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    int matrix[n][n];
    int num=1;
    int delta=1;
    int limit=n;
    int i=0,j=1;
 
    int p,q;
 
    while(1){

        for(p=1; p<=limit; p++){
            j=j+delta;
            matrix[i][j]=num;
         
            if(num==k){
                printf("%d %d", i, j);
                break;
            }
            
            num++;
        }
 

        limit--;
 
        if(limit<0) 
            break;

        for(p=1; p<=limit; p++){
            i=i+delta;
            matrix[i][j]=num;
   
            if(num==k){
                printf("%d %d", i, j);
                break;
            }

            num++;
        }
 

        delta=-delta;
    }

    return 0;
}
                                                                       
                                                                                    
                             

 */

/* 
#include <stdio.h>
int max;
int main()
{
    int i, p, jmax;
    int x = 0, y = -1, d = 1, cnt = 1;
    int num;
    scanf("%d", &p);
    int arr[p][p];
    max = p;
    jmax = max;

    while (jmax >= 0)
    {
        for (i = 0; i < jmax; i++)
        {
            y = y + d;
            arr[x][y] = cnt;
            cnt++;
        }
        jmax--;
        for (i = 0; i < jmax; i++)
        {
            x = x + d;
            arr[x][y] = cnt;
            cnt++;
        }
        d *= -1;
    }
    scanf("%d", &num);

    for (x = 0; x < max; x++) {
        for (y = 0; y < max; y++) {
            if (num == arr[x][y]) {
                printf("%d %d", y + 1, x + 1);
                break;
            }
            else
                continue;
        }
    }
} */
/* #include <stdio.h>
int main()
{
    int sum=0, a, b, cd, i;
    scanf("%d %d", &a, &b);
    for( i=a; i<=b; i++ )
    {
        for(cd=1; cd<=i; cd++)
        {
            if(i%cd==0)
                sum++;
        }
    }
    printf("%d", sum);
    return 0;
} 

//약수문제

#include <stdio.h>
int main()
{
    int sum=0, a, b, cd, i;
    scanf("%d %d", &a, &b);
    for( i=a; i<=b; i++ )
    {
        for(cd=1; cd<=i; cd++)
        {
            if(i%cd==0)
                sum++;
        }
    }
    printf("%d", sum);
    return 0;
}
 */


/* 
#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    int matrix[n][n];
    int num=1;
    int delta=1;
    int limit=n;
    int i=0,j=0;
 
    int p,q;
 
    while(1){

        for(p=1; p<=limit; p++){
            j=j+delta;
            matrix[i][j]=num;
         
            if(num==k){
                break;
            }
            
            num++;
        }
 

        limit--;
 
        if(limit<0) 
            break;

        for(p=1; p<=limit; p++){
            i=i+delta;
            matrix[i][j]=num;
   
            if(num==k){

                break;
            }

            num++;
        }
 

        delta=-delta;
    }

    return 0;
}
              */       

#include <stdio.h>
 
int main(){
    

    int num=1;
    int delta=1;
    int i=0,j=0;
    int n, k;
    scanf("%d %d", &n, &k);
    int matrix[n][n];
    int limit=n;
 
    int p,q;
 
    while(1){
        for(p=0; p<limit; p++){
            j=j+delta;
            matrix[i][j]=num;
            num++;
            if(k==num)
                break;
        }

        limit--;
 
        if(limit<0) break;

        for(p=0; p<limit; p++){
            i=i+delta;
            matrix[i][j]=num;
            num++;
            if(k==num)
                break;
        }
        delta=-delta;
    }
 
    printf("%d %d", i+1, j+1);
    return 0;
 
}
 
                            