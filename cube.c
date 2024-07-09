#include<stdio.h>
int main()
{
    int i,k,val=1;
    scanf("%d",&i);
    for(k=1;k<=3;k++)
    {
        val=val*i;
    }
    printf("...%d\n",val);
}