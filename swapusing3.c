#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a,b values");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);
    
}