#include<stdio.h>
int main()
{
    int num,rem,cnt=0;
    scanf("%d",&num);
    while(num)
    {
        rem=num%10;
        if((rem<0)||(rem>1))
        {
            cnt=1;
            printf("not binery");
            break;
        }
        num=num/10;
    }
    if(cnt==0)
    {
        printf("binery value");
    }
    
}