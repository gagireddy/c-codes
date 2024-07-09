#include<stdio.h>
#include<math.h>
int main()
{
    int num,cnt=0,i;
    scanf("%d",&num);
    for(i=2;i<sqrt(num);i++)
    {
        if(num%i==0)
        {
            cnt++;
        }
        
    }
    if(cnt==0)
    {
        printf("num is prime");
    }
    else
    {
        printf("not a prime num");
    }
}