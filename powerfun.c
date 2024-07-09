#include<stdio.h>
int main()
{
    int i,j,k,val=1;
    scanf("%d %d",&i,&j);
    for(k=1;k<=j;k++)
    {
        val=val*i;
    }
    printf("...%d\n",val);
}