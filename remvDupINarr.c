#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    int arr[n],cnt=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n;k++)
                {
                arr[k]=arr[k+1];
             
            }
            n=n-1;
            }
        }
    }
    
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
   
}
    
    