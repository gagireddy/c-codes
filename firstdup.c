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
        for(j=i+1;j<10;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("first occured no=%d",arr[j]);
                return 0;
            }
        }
    }
   
}
    
    