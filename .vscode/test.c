/*#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d", &n);
    for(a=1;a<=2*n;a++)
    {
        for(b=1;b<=n;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/


/*
#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d", &n);
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=n-a;b++)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d", &n);
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=n-a;b++)
        {
            printf(" ");
        }
        for(b=1;b<=a*2-1;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d", &n);
    for(a=1;a<=n;a++);
    {
        for(b=1;b<=a;a++)
        {
            printf("*")
        }
        printf("\n");
    }
    for(a=1)

}*/

/*
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d", b);
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a%5==0)
    {
        printf("Yes");
    }
    else if(a%3==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int y;
    scanf("%d", &y);
    while (1)
    {
        if(y%4==0)
        {
            if(y%100==0)
            {
                if(y%400==0)
                {
                    printf("YES");
                    break;
                }
                printf("NO");
                break;
            }
            printf("YES");
            break;
        }
        printf("NO");
        break;
    }
    return 0;

}*/

/*
#include <stdio.h>
int main()
{
    int t, age;
    scanf("%d %d", &t, &age);
    if(t<17)
    {
        if(age<=12 && age>=65)
        {
            printf("25000");
        }
        if(12<age && age<65)
        {
            printf("34000");
        }
    }
    else
    {
        printf("10000");
    }
    return 0;
}*/
 /*
#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    while(1)
    {
        if(65<=a && a<=90)
        {   
            printf("Alphabet");
            break;
        }
        else if (97<=a && a<=122);
        {
            printf("Alphabet");
            break;
        }
        else if (48<=a && a<=57);
        {
            printf("Digit");
            break;
        }
        else
        {
            printf("Special Character");
            break;
        }
    }
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int n, a;
    scanf("%d", &n);
    for(a=1;a<=n;a++)
    {
        if(a%3==0)
        {
            printf("%d ", a);
        }
        else if(a%5==0)
        {
            printf("%d ", a);
        }
    }
    return 0;

}*/
/*
#include <stdio.h>
int main()
{
    int sum=0;
    int n;
    for(n=1;n<=100;n++)
    {
        sum +=n;
    }
    printf("%d", sum);
    return 0;
}*/
/*
#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int out_count=0;
    for(int count=n;count>0;count--)
    {
        if(n%count==0)
        {
            if(out_count<k)
            {
                printf("%d", count);
                out_count++;
            }

            else
            {
                return 0;
            }
            
        }
    }
    return 0;
    
}*/

//loop 1
/*#include <stdio.h>
int main()
{
    int n, t;
    float a, b, c;
    float pi=3.141592;
    scanf("%d", &n);
    for(t=1; t<=n; t++)
    {   
        scanf("%f", &a);
        b=a*a*pi;
        c=2*a*pi;
        printf("Case %d:\n%.3f %.3f\n", t, b, c);
    }
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int n, t, sum;
    sum=0;
    scanf("%d", &n);
    for(t=1; t<=10; t++)
    {
        printf("%d ", n*t);
        sum +=n*t;
    }
    printf("\n%d", sum);
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    while (1)
    {
        printf("%d ", a);
        if(a==1)
        {
            break;
        }
        if(a%2==0)
        {
            a=a/2;
            continue;
        }
        else
        {
            a=3*a+1;
            continue;
        }
    }
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int a, b, t, gcd, lcm;
    scanf("%d %d", &a, &b);
    for(t=1; t<=(a<b ? a:b); t++)
    {
        if(a%t==0 && b%t==0)
        {
            gcd = t;
        }
    }
    lcm=a*b/gcd;
    printf("%d", lcm);
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int a, n, sum;
    scanf("%d", &a);
    sum=0;
    for(n=1; n<=a; n++)
    {
        if((n%2==0)||(n%3==0)||(n%7==0))
        {
            continue;
        }
        sum +=n;
    }
    printf("%d", sum);
    return 0;
}*/

/*
#include <stdio.h>

int main()
{
 	int n, i, sum;
 
 	scanf("%d", &n);
 	sum=1;
 	
 	for (i=n; i>=1; i--) 
  		sum= sum*i;
 	
 	printf("%d", sum);
 
 	return 0;
}
*/


/*
#include <stdio.h>
#include <limits.h>
int main()
{
    int number, min_value=INT_MAX;
    printf("정수를 입력하세요\n종료는 Ctrl+\n");
    while(scanf("%d", &number) !=EOF)
    {
        if(number<min_value)
        {
            min_value=number;
        }
    }
    printf("최소값은 %d", min_value);
    return 0;
}*/
/*
//컴퓨터공학부 공준호
#include <stdio.h>
int main()
{
    int m, n, b;
    scanf("%d", &n); //반복횟수 입력
    for(b=1; b<=n; b++)
    {
        scanf("%d", &m); //메뉴번호 입력
        switch(m)
        {
            case 1:
            scanf("%d", &v);
            printf("Case %d:\n%.3f Pyong = %.3f Square-meter\n", b, (float)v, (float)v*3.3);
            break;
            
            case 2:
            scanf("%d", &v);
            printf("Case %d:\n%.3f Gallon = %.3f L\n", b, (float)v, (float)v*3.785412);
            break;

            case 3:
            scanf("%d", &v);
            printf("Case %d:\n%.3f Inch = %.3f CM\n", b, (float)v, (float)v*2.54);
            break;

            default:
            printf("메뉴에 없는 수입니다");
            break;
        }
    }
    return 0;

}*/

/*
#include <stdio.h>
int main()
{
    int n, a, b, c;
    a=0;
    b=1;
    c=0;

    scanf("%d", &n);
    for(; n>0; n--)
    {
        printf("%d ", c);
        c=b;
        b=a+b;
        a=c;
    }
    return 0;
}*/


//정수 m, n, k 입력, m 과 n의 공약수를 작은거부터 k개 출력
/*
#include <stdio.h>
int main()
{
    int m, n, k, cd, a, b;
    scanf("%d %d %d", &m, &n, &k);
    if(m<=n)
    {
        m=a;
        n=b;
    }
    else
    {
        m=b;
        n=a;
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
    

}
*/
//if cd 큰수부터 출력
/*
#include <stdio.h>
int main()
{
    int a, b, m, n, k, cd;
    scanf("%d %d %d", &m, &n, &k);
    cd=1;
    if(m<n)
    {
        a=m;
        b=n;
    }
    else
    {
        b=m;
        a=n;
    }
    for(cd=a; cd>=1; cd--)
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
    int m, lc, k;
    k=0;
    scanf("%d", &m);
    for(lc=1; lc<=m; lc++)
    {
        if(m%lc==0)
        {
            k++;
        }
        else
        {
            continue;
        }
        
    }
    printf("%d", k);
    
    return 0;
}*/



/* #include <stdio.h>
int main()
{
    int n, p, a;
    int arr[1000];
    scanf("%d", &n);
    for(a=0; a<n; a++)
    {
        scanf("%d", &arr[a]);
    }
    scanf("%d", &p);
    printf("%d", arr[p]);
    return 0;
} */


/* #include <stdio.h>
int main()
{
    int i, a, n, j, sum=0, k;
    int arr[1000];
    scanf("%d", &n);
    for( a=0; a<n; a++)
    {
        scanf("%d", &arr[a]);
    }
    scanf("%d", &i);
    scanf("%d", &j);
    for(k=i; k<=j; k++)
    {
        sum +=arr[k];
    }
    
    printf("%d", sum);
    return 0;
} */

/* #include <stdio.h>
int main()
{
    int n1, n2, arr[1000], n, k;
    scanf("%d %d", &n1, &n2);
    for(n=0; n<1000; n++)
    {
        scanf("%d", &arr[n]);
        if(arr[n]==0)
            break;
    }
    for(n=0; n<1000; n++)
    {
        if(n1<=arr[n] && arr[n]<=n2)
            printf("%d ", arr[n]);
        else if(arr[n]==0)
        {
            break;
        }
        else
        {
            continue;
        }
        
        
        
    }
    return 0;
} */


/* #include <stdio.h>
int main()
{
    int n, N, sum=0;
    scanf("%d", &N);
    int arr[N];
    for(n=0; n<N; n++)
    {
        scanf("%d", &arr[n]);
    }
    for(n=0; n<N; n++)
    {
        if(arr[n]%2==0)
        {
            continue;
        }
        else
        {
            sum +=arr[n];
        }
    
    }
    printf("%d", sum);
} */



/* #include <stdio.h>
int main()
{
    int n, m
    scanf("%d", &n);
    if(n%2==0)
        m=n/2;
    else
    {
        m=n/2+1;
    }
    for(int i=0; i<n; i++)
    {
        if(i<m)
            
    }
    
} */

#include <stdio.h>
#include <string.h>
int main()
{
    char dic[1000][2][64], k[64], e[64];
    int menu, a=0, flag=0;
    printf("메뉴를 입력하세요:");
    scanf("%d", &menu);
    menu=getchar();
    while(1)
    {
        printf("메뉴를 입력하세요:");
        scanf("%d", &menu);
        
        if(menu==0)
            break;
        else if(menu==1);
        {
            menu=getchar();
            gets(dic[a][0]);
            gets(dic[a][1]);
            for(int i=0; i<a; i++)
            {
                if(strcmp(dic[i][1], dic[a][1]==0))
                {
                    printf("이미 존재하는 단어입니다. 다시 입력하세요\n");
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                a++;
            printf("%d\n", a);
        }
    }
}