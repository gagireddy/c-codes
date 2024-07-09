#include<stdio.h>
int main()
{
    int n,i,a,sum=0,val;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }
    val=sum/n;
    printf("%d",val);
    
    
}