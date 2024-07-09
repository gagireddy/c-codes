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
    for(i=0;i<n;i++)
    {
        if(arr[i]>h)
        {
            sh=h;
            h=arr[i];
            
        }
        else if(arr[i]>sh)
        {
            sh=arr[i];
        }
    }
    printf("top 2 max no.s=%d %d",h,sh);
}
    
    