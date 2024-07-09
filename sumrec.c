#include<stdio.h>
int sum(int a)
{
    if(a<1)
    return a;
    return ((a%10)+sum(a/10));
    
}
int main()
{
    int a,val;
    scanf("%d",&a);
    val=sum(a);
    printf("%d",val);
    
}