#include<stdio.h>
int fibonocci(int num)
{
    if(num<=1)
    return 0;
    //printf("%d",num);
    return fibonocci(num-1)+fibonocci(num-2);
}
int main()
{
    int num;
    scanf("%d",&num);
    fibonocci(num);
}