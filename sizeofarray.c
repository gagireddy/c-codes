#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
    int i,j,n,n1;
    scanf("%d %d",&n,&n1);
    int arr[n],arr1[n1],cnt;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    i=sizeof(arr);
    j=sizeof(arr1);
    if(i==j)
    {
        printf("equal size");
    }
    else
    {
        printf("not in equal size");
    }
    
   
}
    
    