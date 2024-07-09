#include<stdio.h>
//#include<math.h>
int checkprime(int num)
{
    int i,flag=0;
    for(i=2;i<num;i++)
    {
        if((num%i)==0)
        {
            flag=1;
            //printf("i=%d\n",i);
        }
    }
    if(flag==0)
    {
        return 1;
    }
    else
    return 0;
}
int main()
{
    int num,i;
    scanf("%d",&num);
    for(i=2;i<num/2;i++)
    {
        if((num%i)==0)
        {
            if(checkprime(i)!=0)
            {
                printf("%d\n",i);
            }
        }
    }
    
}