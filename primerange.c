#include<stdio.h>
int main()
{
    int min,max,i,j,flag;
    printf("enter range:");
    scanf("%d %d",&min,&max);
    for(i=min;i<=max;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
        printf("%d\n",i);
        }
        
    }
    
    
}