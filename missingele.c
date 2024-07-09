#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
    int i,j,arr[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
            if((arr[i+1]-arr[i])!=1)
            {
                printf("%d is missing",arr[i]+1);
                
            }
    }
}
    
    