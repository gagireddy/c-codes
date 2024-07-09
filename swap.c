#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a,b values:");
    scanf("%d %d",&a,&b);
    printf("%d %d\n",a,b);
    //b=(a*b)/(a=b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("swapped values %d %d",a,b);
}