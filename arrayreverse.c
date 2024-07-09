#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
    int i,j,sh=0,h=0,n;
    scanf("%d",&n);
    int arr[n],cnt;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}
    
    