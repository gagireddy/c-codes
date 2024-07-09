#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
    int i,j,max,min,n;
    scanf("%d",&n);
    int arr[n],cnt;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[1];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("%d %d",min,max);
}
    
    