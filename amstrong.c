#include<stdio.h>
int main()
{
    int num,sum=0,rem,num1;
    scanf("%d",&num);
    num1=num;
    while(num1)
    {
        rem=num1%10;
        sum=sum+(rem*rem*rem);
        num1=num1/10;
    }
    if(sum==num)
    {
        printf("given number is an amstrong number");
    }
    else
    {
        printf("not an amstrong number");
    }
}