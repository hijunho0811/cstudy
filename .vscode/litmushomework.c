/*#include <stdio.h>
int main()
{
    float x, y;
    scanf("%f %f", &x, &y);
    printf("%.3f %.3f", 2*x+2*y, x*y);
    return 0;
} */
/*
#include <stdio.h>
int main() 
{
    float x, y;
    int A;
    scanf("%f %f", &x, &y);
    
    A=x+y;
    printf("%d", A);
    return 0;
} */

/*#include <stdio.h>
int main()
{
    int x, y, A, B;
    scanf("%d %d", &x, &y);
    A=x/y;
    B=x%y;
    printf("%d %d", A, B);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int sec, min, hour;
    scanf("%d", &sec);
    min=sec/60;
    hour=min/60;
    sec=sec%60;
    min=min%60;
    printf("%d %d %d", hour, min, sec);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int a;
    float b,c;
    scanf("%d", &a);
    b=2*a*3.141592;
    c=a*a*3.141592;
    printf("%.3f %.3f", b, c);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int a, b;
    float c;
    scanf("%d %d", &a, &b);
    c=a*a*b*3.141592;
    printf("%.3f", c);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int score;
    printf("당신의 점수를 입력하세요: ");
    scanf("%d", &score);
    if (score>=90)
    {
        printf("당신은 합격입니다!");
    }
    if (score<90)
    {
        printf("당신은 불합격입니다!");
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    char a, b;
    scanf("%c %c", &a, &b);
    printf("[%c, %c]", a, b);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    float liter, gallon;
    scanf("%f", &liter);
    gallon=liter/3.785412;
    printf("%.3f", gallon);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    printf("%d", a);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    float r;
    scanf("%f", &r);
    printf("%.3f %.3f", r*r*3.141592, 2*r*3.141592);
    return 0;
}*/
/*
#include <stdio.h>
int main()
{
    int a;
    float b;
    scanf("%d", &a);
    b=a/3.3;
    printf("%.3f", b);
    return 0;
}*/

/*#include <stdio.h>
#include <math.h>
int main()
{
    float a, b;
    float result;
    scanf("%f %f", &a, &b);
    result=sqrt(a*a+b*b);
    printf("%.2f", result);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int n;
    for(n=1; n<11; n++)
    {
        printf("%d", 2*n-1);
    }
    return 0;
} */

/*#include <stdio.h>
int main()
{
    int a;
    for (a=65; a<71; a++)
    {
        printf("%c->%d, %c->%d\n", a, a, a+32, a+32);
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int n=1;
    for(n=1; n<11; n++)
    {
        printf("%d ", 2*n-1);
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    char a, b;
    scanf("%c", &a);
    printf("%c %d", a+2, a+2);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    char a, b;
    scanf("%c%c", &a, &b);
    printf("%d", a+b);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    for(c=48;c<58;c++)
    {
        printf("%c ", c+1);
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    float mile;
    mile=1.609344;
    printf("%.2f\n%.5f", mile, mile);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%.2f %.2f", a*b, 2*a+2*b);
   return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int m, n, k;
    printf("두 수를 입력하세요:");
    scanf("%d %d", &m, &n);
    printf("출력할 공약수의 개수를 입력하세요:");
    scanf("%d", &k);

    while(1)
    {
        
    }
    return 0;
}
*/
/*과제1
#include <stdio.h>
int main()
{
    int sec, min, hour;
    scanf("%d", &sec);
    min=sec/60;
    hour=min/60;
    sec=sec%60;
    min=min%60;
    printf("%d %d %d", hour, min, sec);
    return 0;
}*/

/*
#include <stdio.h>

int main(void)
{
   int n, x;
   scanf("%d", &n);
   for(x=n; x<=n+5; x++){
      printf("%d ", x);
   }
   printf("\n");
   for(x=n; x>=n-5; x--){
      printf("%d ", x);
   }
   printf("\n");
   return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d", a/b, a%b);
    return 0;
}*/

/*
#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    for(a=1;a<=6;a++)
    {
        printf("%.0lf ", pow(2,a));
    }
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    if(1<=a && a<=100)
    {
        for(b=1;b<=a;b++)
        {
            for(c=1;c<=a;c++)
            {
               printf("*");
            }
        printf("\n");
        }
    }
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int a, b;
    for(a=2;a<=5;a++)
    {
        for(b=1;b<=9;b++)
        {
            printf("%d * %d = %d\n", a, b, a*b);
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
    if(2<=n && n<=100)
    {
        for(a=1;a<=n;a++)
        {
            for(b=1;b<=a;b++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n%3==0)
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
    int a;
    scanf("%d", &a);
    if(a<0)
    {
        printf("negative number");
    }
    else if(a=0)
    {
        printf("zero");
    }
    else
    {
        printf("positive number");
    }
    return 0;
} */

/* char은 ""대신 ''사용
#include <stdio.h>
int main()
{
    char a='a';
    printf("%c", a);
    return 0;
}
*/

//가운데 빈 사각형 별찍기
/*
#include <stdio.h>
int main()
{
    int a, b, n;
    scanf("%d", &n);
    for(a=1; a<=n; a++)
    {
        printf("*");
    }
    printf("\n");
    for(a=1; a<=n-2; a++)
    {
        printf("*");
        for(b=1; b<=n-2; b++)
        {
            printf(" ");
       }
       printf("*\n");
    }
    for(a=1; a<=n; a++)
    {
        printf("*");
    }
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int a, b, c, d, n;
    scanf("%d", &n);
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(c=n-1;c>=0;c--)
    {
        for(d=1;d<=c;d++)
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
    int a, b, n;
    scanf("%d", &n);
    for(a=n;a>=0;a--)
    {
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
    int a, b, n;
    scanf("%d", &n);
    for(a=n; a>=0; a--)
    {
        for(b=1; b<=n-a;b++)
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

/*
#include <stdio.h>
int main()
{
    int a, b, c, d, n;
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
    for(c=n-1; c>=0; c--)
    {
        for(d=1; d<=n-c;d++)
        {
            printf(" ");
        }
        for(d=1; d<=c; d++)
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
    int a, b, c, d, n;
    scanf("%d", &n);
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(c=n-1;c>=0;c--)
    {
        for(d=1;d<=c;d++)
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
    int a, n, m;
    scanf("%d %d", &n, &m);
    for(a=1; a<=100; a++)
    {
        if(a*n>m)
            break;
        else
        {
            printf("%d ", n*a);
        }
    }
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int a, sum, n;
    sum=0;
    scanf("%d", &n);
    for(a=1; a<=n; a++)
    {
        if(a%5==0)
        {
            continue;
        }
        else
        {
            sum +=a;
        }
    }
    */

/*
#include <stdio.h>
int main()
{
    char c1, c2, n;
    scanf("%c %c", &c1, &c2);
    for(n=c1+1; n<c2; n++)
    {
        printf("%c ", n);
    }
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
 int n;
 printf("NO:");
 scanf("%d", &n);

 for (int i = 1; i <= n; i++)
 {
  for (int j = i; j < n; j++)
  {
   printf(" ");
  }
  for (int j = 1; j <= i * 2 - 1; j++)
  {
   if ( j == 1 || j == i * 2 - 1)
   {
    printf("*");
   }
   else
   {
    printf(" ");
   }
  }
  printf("\n");
 }
 for (int i = 1; i < n; i++)
 {
  for (int j = 1; j <= i ; j++)
  {
   printf(" ");
  }
  for ( int j = n * 2-1 ; j >= i * 2 +1; j --)
  {
   if (j == n * 2-1 || j == i * 2 +1 )
   {
    printf("*");
   }
   else
   {
    printf(" ");
   } 
  }
  printf("\n");
 }
}*/

/*
#include <stdio.h>
int main()
{
    int a, n;
    scanf("%d", &n);
    printf("*****\n");
    for(a=1; a<=n-2; a++)
    {
        printf("*   *\n");
    }
    printf("*****");
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int a, b, c, d, e, n;
    scanf("%d", &n);
    c=n/2;
    if(n%2==0)
    {
        for(a=1; a<=c; a++)
        {
            for(b=1; b<=c-a; b++)
            {
                printf(" ");
            }
            for(b=1; b<=a*2-1; b++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        for(a=1; a<=c; a++)
        {
            for(b=1; b<=c-a+1; b++)
            {
                printf(" ");
            }
            for(b=1; b<=a*2-1; b++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    
    if(n%2==0)
    {
        for(d=c; d>=1; d--)
        {
            for(e=1; e<=c-d; e++)
            {
                printf(" ");
            }
            for(e=1; e<=d*2-1; e++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        for(d=c+1; d>=1; d--)
        {
            for(e=1; e<=c+1-d; e++)
            {
                printf(" ");
            }
            for(e=1; e<=d*2-1; e++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    
    return 0;
}*/

/*
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
}*/

/*
#include <stdio.h>
int main()
{
    int a, b, c, d, e, n;
    scanf("%d", &n);
    c=n/2;
    if(n%2==0)
    {
        for(a=1; a<=c; a++)
        {
            for(b=1; b<=c-a; b++)
            {
                printf(" ");
            }
            for(b=1; b<=2*a-1; b++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int a, b, A, B, R;
    scanf("%d %d", &a, &b);
    if (a>b) 
    {
        A=a;
        B=b;
    }
	else 
    {
        A=b;
        B=a;
    }
	
	while (1) 
    {
		R=A%B;
		if (R==0) 
            break;
		else 
        {
            A=B; 
            B=R;
        }
	}
    printf("%d", B);
    return 0;
}*/

/*

#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    while (1)
    {
        scanf("%d", &b);
        if(b!=0)
        {
            if(b<=a && b%2==1)
            {
                printf("%d\n", b);
            }
            else
            {
                continue;
            }    
        }
        else
        {
            break;
        }
    }
    return 0;
}*/
/////////////////////////////////////////////////////

/*
#include <stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
     
    for(;;) 
    {
        scanf("%d",&a);
        if(a<=n&&a%2==1)
        {
            printf("%d ",a);
            continue;
        }
        else if(a==0)
        {
            break;
        }
         
    }       
            return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int a, b, n;
    scanf("%d", &n);
    for(a=1; a<=n; a++)
    {
        printf("*");
    }
    printf("\n");
    for(b=1; b<=n-2; b++)
    {
        printf("*");
        for(a=1; a<=n-2; a++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for(a=1; a<=n; a++)
    {
        printf("*");
    }
    return 0;
}*/

// #include <stdio.h>
// int main()
// {
//     int a, b, m, n, k;
//     scanf("%d %d", &a, &b);
//     if(a<b)
//     {
//         m=a;
//         n=b;
//     }
//     else
//     {
//         m=b;
//         n=a;
//     }
//     for(k=m; k>=1; k--)
//     {
//         if(m%k==0 && n%k==0)
//         {
//             printf("%d ", k);
//             break;
//         }
//         else
//         {
//             continue;
//         }

//     }
//     return 0;
// }

// #include <stdio.h>
// int sum(char op, int a1, int a2)
// {

// }

/* #include <stdio.h>
int a;
int print(int n)
{
    for(int a=1; a<=10; a++)
    {
        printf("%d ", n*a);
    }

}
int main() {
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
} */
/*
#include <stdio.h>
int sum;
int division(int n)
{
    for(int a=1; a<=n; a++)
    {
        if(n%a==0)
        {
            printf("%d ", a);
            sum +=a;
        }
    }
    printf("\n");
    return sum;
}
int main() {
    int n, result;
    scanf("%d", &n);
    result = division(n);
    printf("%d", result);
    return 0;
}*/

/*
#include<stdio.h>
 
int cal(char btw, int a, int b)
{
    int i, result;
    switch(btw)
    {
        case '+' :
            result = a + b;
            break;
        case '-' :
            result = a - b;
            break;
        case '*' :
            result = a * b;
            break;
        case '/' :
            result = a / b;
            break;
        case '%' :
            result = a % b;
    }
    return result;
}
 
int main() {
    int a, b, result; char btw;
    scanf("%d %c %d", &a, &btw, &b);
    result = cal(btw, a, b);
    printf("%d", result);
    return 0;
}*/

/* #include <stdio.h>
int mirrorsequence(char barcode[])
{
    int i, k = 1, sum = 0;
    for (i = 6; i >= 0; i--)
    {
        if (barcode[i] % 2 == 0)
            sum += 0;
        else
        {
            sum += k;
        }
        k *= 2;
    }
    printf("%d\n", sum);
    return 0;
}
int main()
{
    int n;
    char barcode[7];
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        scanf("%s", barcode);
        mirrorsequence(barcode);    
    }
    return 0;
} */


/* #include <stdio.h>
#include <string.h>
void print(char word[]);

int main()
{
    char word[10];
    scanf("%s", word);
    print(word);
    return 0;
}

void print(char word[])
{
    if(strcmp(word, "photo")==0)
        printf("3 2 1 cheese");
    else if(strcmp(word, "message")==0)
        printf("You got a new message");
    else if(strcmp(word, "honey")==0)
        printf("Calling to your sweet");
    else
    {
        printf("Please try again");
    }
    
} */
/* #include <stdio.h>

int hour(int n)
{
    int h;
    h=n/3600;

    return h;
}
int minute(int n)
{
    int m;
    m=n%3600/60;
    return m;
}
int second(int n)
{
    int s;
    s=n%60;
    return s;
}
int main() {
    int h, m, s, n;
    scanf("%d", &n);
    h = hour(n);
    m = minute(n);
    s = second(n);
    printf("%d %d %d", h, m, s);
    return 0;
} */


/* #include <stdio.h>
int BMI(float f){
    if(f<20)
        return 1;
    else if(20<=f && f<=24)
        return 2;
    else
    {
        return 0;
    }
    
				
}

int main(){
				
	int judge;
	float bmi;
	scanf("%f", &bmi);
	judge = BMI(bmi);
				
	if(judge==1)
        printf("low");
	else if(judge==2)
        printf("normal");
	else 
        printf("warning");  

} */



/* #include <stdio.h>
int calculator(float a, float b)
{
    float sum;
    sum=3.43*a*b+3.0*a-7.3*b;
    printf("%.3f", sum);
}
int main()
{
    float a, b, sum;
    scanf("%f %f", &a, &b);
    calculator(a, b);
    return 0;
} */

/* #include <stdio.h>
int compare(int a, int b, int c, int d)
{
    int max;
    if(a>b && a>c && a>d)
        max=a;
    else if(b>a && b>c && b>d)
        max=b;
    else if(c>a && c>b && c>d)
        max=c;
    else
    {
        max=d;
    }
    printf("%d", max);
    return 0;
}
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    compare(a, b, c, d);
    return 0;
} */
/*
#include <stdio.h>

int fibonacci(int);

int main()
{
	int i, n;
	scanf("%d", &n);
    printf("%d", fibonacci(n));
	return 0;
}

int fibonacci(int n)
{
	if(n == 0 || n == 1)
		return n;
	else
		return fibonacci(n-1) + fibonacci(n-2);
}
  */


/* 
#include <stdio.h>
int main()
{
    int index[100];
    int n, a, b;
    scanf("%d", &n);
    for(a=0; a<n; a++)
    {
        scanf("%d", &index[a]);
    }
    if(n%2==0)
    {
        printf("%d", index[n/2-1]);
    }
    else
    {
        printf("%d", index[n/2]);
    }
    
} */

/* #include <stdio.h>
int main()
{
    int arr[1000];
    int a, n, max, min;
    scanf("%d", &n);
    for(a=0; a<n; a++)
    {
        scanf("%d", &arr[a]);
    }
    min=arr[0];
    max=arr[0];
    for(a=0; a<n; a++)
    {
        if(arr[a]>max)
            max=arr[a];
        if(arr[a]<min)
            min=arr[a];
    }
    printf("%d %d", max, min);
    return 0;
} */

/* #include <stdio.h>
int main()
{
    int score[5], N, a, b, c;
    scanf("%d", &N);
    for(a=0; a<N; a++)
    {
        for(b=0; b<3; b++)
            scanf("%d", &score[b]);
    
        score[3]=score[0]+score[1]+score[2];
        score[4]=score[3]/3;
        printf("%d %d %d %d %d\n", score[0], score[1], score[2], score[3], score[4]);
    }
    return 0;
}  */
/* 
#include <stdio.h>
  
int main(void){
      
    int n,m,k;
  
    scanf("%d", &n);
      
    m=(n+n%2)/2;                                                            //n의 중간값
      
    for(int i=0; i<n; i++)                                                   //n번동안 다음을 실행
    {   
        if(i<m)                                                              //다이아몬드의 아랫부분을 그리기 위해 k 정의
            k=i;
        else
            k=n-i-1;
        for(int j=1; j<=n; j++)
        {   
            if(j==m-k||j==m+k)                                                //j가 m-k 또는 m+k이면 '*'을 출력. 아니면 ' '을 출력-다이아몬드의 테두리에만 '*'을 출력
                printf("*");
            else
                printf(" ");
        }
        printf("\n");           //줄바꿈
    }
      
      
    return 0;
} */



/* #include <stdio.h>
#include <stdlib.h> 

void counting(char text[])
{
    long num=atol(text);
    printf("%d\n",num);
    int count[10]={0};
    for(int i=0; text[i] !='\0'; i++, num/=10)
        count[num%10]++;
    for(int i=0; i<10; i++)
        printf("%d ", count[i]);
}
int main()
{
    int i=0;
    char text[1000];
    scanf("%s", text);
    counting(text);
    return 0;
}

 */

/* #include <stdio.h>
void counting(char arr[])
{
    int sum[10]={0};
    for(int i=0; arr[i]!=0; i++)
    {
        if(arr[i]=='0')
            sum[0]++;
        if(arr[i]=='1')
            sum[1]++;
        if(arr[i]=='2')
            sum[2]++;
        if(arr[i]=='3')
            sum[3]++;
        if(arr[i]=='4')
            sum[4]++;
        if(arr[i]=='5')
            sum[5]++;
        if(arr[i]=='6')
            sum[6]++;
        if(arr[i]=='7')
            sum[7]++;
        if(arr[i]=='8')
            sum[8]++;
        if(arr[i]=='9')
            sum[9]++;
    }
    for(int a=0; a<10; a++)
        printf("%d ", sum[a]);
}

int main()
{
    char text[1000];
    scanf("%s", text);

    counting(text);
    return 0;
    
} 


 */

/* #include <stdio.h>
int main()
{
    int n, m, maxa, maxb, mina, minb;
    scanf("%d %d", &n, &m);
    int an[n], bn[m];
    for(int a=0; a<n; a++)
        scanf("%d", &an[a]);
    for(int b=0; b<m; b++)
        scanf("%d", &bn[b]);
    maxa=an[0];
    mina=an[0];
    for(int a=0; a<n; a++)
    {
        if(an[a]<maxa)
            maxa=an[a];
        else if(an[a]>mina)
            mina=an[a];
    }
    maxb=bn[0];
    minb=bn[0];
    for(int a=0; a<n; a++)
    {
        if(bn[a]<maxb)
            maxb=bn[a];
        else if(bn[a]>minb)
            minb=bn[a];
    }
    printf("%d %d", mina+minb,  maxa+maxb);
    return 0;



} */

/* #include <stdio.h>
int add_odd(int arr[], int n)
{
    int sum=0, a;
    for(a=0; a<n; a++)
    {
        if(arr[a]%2 != 0)
            sum+=arr[a];
    }
    return sum;
}
int main()
{
	int n, i;
	int arr[100];
	scanf("%d", &n);
	for(i = 0; i < n; i++) scanf("%d", &arr[i]);
	printf("%d", add_odd(arr, n));
	return 0;
} */

/* #include <stdio.h>
int main()
{
    int arr[100], n, a, b, sum=0;
    scanf("%d", &n);
    for(int c=0; c<n; c++)
        scanf("%d", &arr[c]);
    if(n==1)
        printf("%d", arr[0]);
    if(n>1)
        scanf("%d %d", &a, &b);;
    if(n>1)
    {

        for(int c=a; c<=b; c++)
        {

            if(arr[c]==1)
                sum+=1;
        }
        printf("%d", sum);
    }
    return 0;
} */
/* 
#include <stdio.h>
int add_even(int arr[], int n, int *sum)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
            *sum+=arr[i];
    }
    return *sum;
}
int main()
{
	int n, i, sum = 0;
	int arr[100];
	scanf("%d", &n);
	for(i = 0; i < n; i++) scanf("%d", &arr[i]);
        add_even(arr, n, &sum);
	printf("%d", sum);
	return 0;
} */

/* #include <stdio.h>
void change(int *a, int *b, int *c)
{
    int temp1, temp2;
    temp1=*b;
    temp2=*c;
    *c=*a;
    *a=temp1;
    *b=temp2;
    
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    change(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
} */


/* #include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    if(strcmp(str1, str2)==0)
        printf("equal");
    else
    {
        printf("not equal");
    }
    return 0;
}
 */

/* #include <stdio.h>
int main()
{
    char arr[1000];
    int len=0;
    scanf("%s", arr);
    for(int i=0; i<1000; i++)
    {
        if(arr[i]==0)
            break;
        len++;
    }
    printf("%s %d", arr, len);
    return 0;
} */

/* #include <stdio.h>
int main()
{
    char arr[3][80], ca, a[80], b[80], c[80];
    int x, y;
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);
    for(int k=0; k<80; k++)
    {        
        arr[0][k]=a[k];
        arr[1][k]=b[k];
        arr[2][k]=c[k];
    }
    scanf("%c", &ca);
    for(int i=0; i<3; i++)
    {
        for(int k=0; k<80; k++)
        {
            if(arr[i][k-1]==0)
                break;
            if(arr[i][k]==ca)
                printf("%d, %d", i, k);
        }
    }
    return 0;
    
} */


/* #include <stdio.h>
int main()
{
    char arr[100], ba[100];
    int len=0;
    scanf("%s", arr);
    for(int i=0; i<100; i++)
    {
        if(arr[i]==0)
            break;
        len++;
    }
    for(int i=0; i<len; i++)
    {
        ba[len-i-1]=arr[i];
    }
    printf("%d\n", len);
    for(int i=0; i<len; i++)
        printf("%c", ba[i]);
    return 0;
} */


/* #include <stdio.h>
#include <math.h>
struct coords
{
    int garo;
    int sero;
};
int main()
{
    struct coords a, b;
    double len;
    
    scanf("%d %d", &a.garo, &a.sero);
    scanf("%d %d", &b.garo, &b.sero);
    double dx=a.garo - b.garo;
    double dy=a.sero - b.sero;
    len=sqrt((dx*dx)+(dy*dy));
    printf("%.2lf", len);
    return 0;

} */
/* 
#include <stdio.h>
#include <string.h>
struct info
{
    int score;
    char event1;
    char event2;
    char event3;
    char event4;
    char name[10];
};
int main()
{
    struct info list[10];
    int student;
    int sum[10]= {0};
    int max=0;
    int num;
    scanf("%d", &student);
    for(int i=0; i<student; i++)
    {
        scanf("%d %c %c %c %c", &list[i].score, &list[i].event1, &list[i].event2, &list[i].event3, &list[i].event4);
        scanf("%s", list[i].name);
    }
    for(int i=0; i<student; i++)
    {
        sum[i] += list[i].score;
        if(list[i].event1=='O')
        {
            sum[i]+=5;
        }
        if(list[i].event2=='O')
        {
            sum[i]+=5;
        }
        if(list[i].event3=='O')
        {
            sum[i]+=5;
        }
        if(list[i].event4=='O')
        {
            sum[i]+=5;
        }
    }
    max=sum[0];
    for(int i=0; i<student; i++)
    {
        if(sum[i]>max)
        {
            max=sum[i];
            num=i;
        }
    }

    printf("%s", list[num].name);
    return 0;
}

 */


/* #include <stdio.h>
struct time
{
    int hour;
    int min;
    int sec;
};
int main()
{
    struct time ti;
    int sum;
    scanf("%d %d %d", &ti.hour, &ti.min, &ti.sec);
    sum=ti.hour*3600 + ti.min*60 + ti.sec;
    printf("%d", sum);
    return 0;
} */

/* #include <stdio.h>
#include <string.h>
int j=0;

struct dictionary{
   char korean[64];
   char english[64];
};

void menu1(struct dictionary dic[]){
   
   char kor[64];
   while(strcmp(dic[j].korean, '\0')!=0)
   {
        j++;
   }
    printf("한글입력: "); 
    gets(kor);
    strcpy(dic[j].korean, kor);
    printf("영어입력: ");
    gets(dic[j].english);

    for(int i=0; i<j; i++){
        if( strcmp(dic[j].english, dic[i].english) == 0){
            printf("이미 존재하는 영어단어 입니다 ");
            strcpy(dic[j].english, '\0');
            strcpy(dic[j].korean, '\0');
            break; 
        }
    }  
}

void menu2(struct dictionary dic[]){

   char search[64];
    
   gets(search);
   
   for(int i=0; strcmp(dic[i].korean, '\0')==0 ; i++){
      if(strcmp(dic[i].korean, search) == 0) 
            puts(dic[i].korean);
      else printf("존재하지 않는 단어입니다.\n");
   }
}

void menu3(struct dictionary dic[]){

   int i=0;
   
   while(strcmp(dic[i].korean, '\0')!=0){
      printf("\t");
      puts(dic[i].korean);
      printf("\t");
      puts(dic[i].english);
      printf("\n");
      i++;
   }
}

int main(void){
   
   int i, menu, *words=0;
   struct dictionary dic[1000];
   
   while(1){
      
      printf("\n메뉴를 입력해주세요\n(1:단어쌍 추가, 2:한국어 단어에 대한 영어 검색, 3:사전의 모든 단어쌍 출력)\n\n"); 
      scanf(" %c", &menu);
      getchar();
      
      if(menu=='0')break;
      else if(menu=='1')menu1(dic);    //단어쌍 추가 
      else if(menu=='2')menu2(dic);   // 한국어 단어에 대한 영어 검색 
      else if(menu=='3')menu3(dic);   // 사전의 모든 단어쌍 출력 
      else printf("존재하지않는 메뉴입니다\n");   
   
   }
} 


 */

/* #include <stdio.h>
#include <string.h>

int size=0, i, menu, flag=0;
char input_arr[20], select;
int input_int;

struct information{
	int ISBN, year, check;
	char index[50], writer[50];
};

struct information library[1000];

void menu1_input(struct information library[]);
void menu2_search(struct information library[]);
void menu3_borrow(struct information library[]);
void menu4_return(struct information library[]);
void menu5_output(struct information library[]);


int main(void){
		 
	while(1){
		printf("\n1: 도서 정보 입력 2: 도서 검색 3: 도서 대출 4: 도서 반납 5: 도서 정보 출력 6: 프로그램 종료\n");
		printf("메뉴를 입력하세요: ");

		scanf("%d", &menu);
			 
		if( menu == 1 )	menu1_input(library);
		else if( menu == 2 ) menu2_search(library);
		else if( menu == 3 ) menu3_borrow(library);
		else if( menu == 4 ) menu4_return(library);
		else if( menu == 5 ) menu5_output(library);
		else if( menu == 6 ) break;
	
	}
}

void menu1_input(struct information library[]){
	scanf("%d %s %s %d", &library[size].ISBN, library[size].index, library[size].writer, &library[size].year);
	for(i=0; i<size; i++)
		if(library[i].ISBN == library[size].ISBN){
			printf("오류: ISBN 중복\n");
			size--; 
			break;
		}
	library[size].check = 1;
	size++;
}

void menu2_search(struct information library[]){
	printf("A: 도서명 검색\nB: 저자 검색\n");

	scanf(" %c", &select);
	
	if(select == 'A'){
		scanf("%s", input_arr);
		for(i=0, flag=0; i<size; i++)
			if(strcmp(library[i].index, input_arr) == 0) {
				printf("%08d\t%s\t%s\t%d\t", library[i].ISBN, library[i].index, library[i].writer, library[i].year);
				if( library[i].check == 1 ) printf("대출가능\n");
				else printf("대출중\n");
				flag = 1;
			}
		if(!flag) printf("존재하지 않는 저자이거나 도서명입니다\n");
	}
	else if(select == 'B'){
		scanf("%s", input_arr);
		for(i=0, flag=0; i<size; i++)
			if(strcmp(library[i].writer, input_arr) == 0){
				printf("%08d\t%s\t%s\t%d\t", library[i].ISBN, library[i].index, library[i].writer, library[i].year);
				if( library[i].check == 1 )
					printf("대출가능\n");
					else printf("대출중\n");
				flag = 1;
			}
	if(!flag) printf("오류: 존재하지 않는 저자명/도서명\n"); 
	}
}

void menu3_borrow(struct information library[]){
	printf("대출할 도서명을 입력하세요: ");
	scanf("%s", input_arr);
	for(i=0, flag=0; i<size; i++)
		if(strcmp(library[i].index, input_arr) == 0) {
		 	if( library[i].check == 1 ){
	 			printf("대출이 완료되었습니다. 도서명: %s ISBN: %08d\n", library[i].index, library[i].ISBN);
	 	 		library[i].check = 0;	
		 		}
	 	 		else printf("오류: 대출중\n"); 
	 	 	flag=1;
		}
			if(!flag) printf("오류: 존재하지 않는 도서명\n"); 
}

void menu4_return(struct information library[]){
	printf("반납할 도서명을 입력하세요: \n");
	scanf("%s", input_arr);
	for(i=0, flag=0; i<size; i++)
		if(strcmp(library[i].index, input_arr) == 0) {
		 	if( library[i].check == 0 ){
	 			printf("반납이 완료되었습니다. 도서명: %s ISBN: %08d\n", library[i].index, library[i].ISBN);
	 	 		library[i].check = 1;	
		 		}
	 	 		else printf("오류: 대출 가능한 도서\n"); 
	 	 	flag=1;
		 	}
			if(!flag) printf("오류: 존재하지 않는 도서명\n"); 
}

void menu5_output(struct information library[]){
	printf("A: 대출가능도서 출력\nB: 전체도서 출력\n"); 
	scanf(" %c", &select);
	if(select == 'A'){
		for(i=0; i<size; i++)
			if( library[i].check )
			printf("%08d\t%s\t%s\t%d\t\n", library[i].ISBN, library[i].index, library[i].writer, library[i].year);
	}else if(select == 'B'){
		for(i=0; i<size; i++){
			printf("%08d\t%s\t%s\t%d\t", library[i].ISBN, library[i].index, library[i].writer, library[i].year);
			if( !library[i].check )printf("대출 중\n");
			else if( library[i].check ) printf("대출 가능\n"); 
		}
	}
		
} */


/* #include <stdio.h>
int main()
{
    char s[20] = “apple”; 
    char t[20] = “tomato”; 
    char *p = s, *q = t; 
    while(*p)   *p++; 
    while(*q)   *p++ = *q++; 
    printf(“%s”, s);
} */


#include <stdio.h>
