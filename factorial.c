#include<stdio.h>
int main()
{
    int num,i,temp=1;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
       temp=temp*i;
    }
    printf("%d",temp);
}