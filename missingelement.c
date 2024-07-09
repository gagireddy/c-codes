#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int arr[n],arr1[n],cnt;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        cnt=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr1[j])
            {
                cnt++;
            }
        }
        if(cnt==0)
        {
            printf("missing element=%d",arr[i]);
        }
    }
   
}
    
    