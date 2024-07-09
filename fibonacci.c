#include<stdio.h>
int main()
{
    int fi=0,sc=1,th,count;
    printf("enter rang:");
    scanf("%d",&count);
    printf("%d %d ",fi,sc);
    while(count)
    {
        th=fi+sc;
        fi=sc;
        sc=th;
        printf("%d ",th);
        count--;
        
    }
    
    
    
}