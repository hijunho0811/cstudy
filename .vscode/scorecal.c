#include <stdio.h>
#include <stdlib.h>
int m1n(int arr[], int n)                                                     //최소 점수
{
    int a;
    a=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]<a)
            a=arr[i];
    }
    return a;
}

int max(int arr[],int n)                                                      //최대 점수
{
    int a;
    a=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>a)
            a=arr[i];
    }
    return a;
}

int avg(int arr[],int n)                                                      //점수 평균
{
    int a=0;
    for(int i=0; i<n; i++)
        a+=arr[i];
    a/=n;
    return a;
}

int grade(int n)                                                              //학점
{
    if(n>=90)
        return 'A';
    else if(n>=80)
        return 'B';
    else if(n>=70)
        return 'C';
    else if(n>=60)
        return 'D';
    else
    {
        return 'F';
    }

}
int main()
{
    int n, a;
    printf("학생 수를 입력해주세요:");
    scanf("%d",&n);
    int sc[n][4];
    int info[n][7];
    int kor[n];                                             //과목별 배열 정의
    int ma[n];
    int en[n];
    
    for(int i=0; i<n; i++)
    {                                                       //이차원 배열에 학번, 성적 저장
        printf("학점과 성적을 입력해주세요:");
        for(int j=0; j<4; j++)
            scanf("%d", &sc[i][j]);     
    }
                                                             //전체 정보를 저장하는 배열로 정리 
    for(int i=0; i<n; i++)   
    {
        info[i][0]=sc[i][0]; 
        info[i][1]=sc[i][1]; 
        info[i][2]=sc[i][2]; 
        info[i][3]=sc[i][3]; 
        info[i][4]=sc[i][1]+sc[i][2]+sc[i][3]; 
        info[i][5]=(int)info[i][4]/3; 
        info[i][6]=grade(info[i][5]);
    }

    for(int i=0; i<n; i++)                                    //과목별로 정보 저장                                     
    {
        kor[i]=info[i][1];      
        ma[i]=info[i][2];
        en[i]=info[i][3];
    }    

    int m1[4]={0,m1n(kor, n),m1n(ma, n),m1n(en, n)};                        //과목별 최소, 최대, 평균을 배열에 저장
    int m2[4]={0,max(kor, n),max(ma, n),max(en, n)};
    int av[4]={0,avg(kor, n),avg(ma, n),avg(en, n)};   
    
    while(1)
    {
        printf("메뉴를 입력하세요:");
        scanf("%d", &a);
        if(a==0)                                                                //종료
            exit(0);
        else if(a==1)                                                           //모든 배열의 정보 출력
        {
            for(int i=0; i<n; i++)
                printf("%d %d %d %d %d %d %c\n", info[i][0], info[i][1], info[i][2], info[i][3], info[i][4], info[i][5], info[i][6]);
            printf("%d %d %d %d\n", m1[0], m1[1], m1[2], m1[3]);
            printf("%d %d %d %d\n", m2[0], m2[1], m2[2], m2[3]);
            printf("%d %d %d %d\n", av[0], av[1], av[2], av[3]);
        }
        else if(a==2)                                                         
        {
            int id;
            int s;
            printf("학번을 입력해주세요:");
            scanf("%d", &id);
            for(int i=0; i<n; i++)            // 배열에 저장된 학번 검증
            {
                if(info[i][0] == id)
                {                             //if 같은 학번, 변수에 그 학번이 저장된 배열 번호 저장
                    s=i;
                    break;
                }
                else
                {
                    s=-1;                    //같은 학번 없다면 변수에 i 이외의 정수 저장
                }
                
            }
            if(s==-1)
                printf("Not Valid");
            else
            {
                printf("%d %d %d %d %d %d %c\n", info[s][0], info[s][1], info[s][2], info[s][3], info[s][4], info[s][5], info[s][6]);      
            }            
        }
        else
        {
            printf("다시 입력해주세요\n");
        }
    }
    return 0;
}