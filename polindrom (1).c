#include<stdio.h>
int main()
{
    int num,rem,temp=0,num1;
    scanf("%d",&num);
    num1=num;
    while(num1)
    {
        rem=num1%10;
        temp=temp*10+rem;
        num1=num1/10;
    }
    if(temp==num)
    {
        printf("polindrom");
    }
    else
    {
        printf("not polindrom");
    }
}