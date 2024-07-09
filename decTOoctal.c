#include <stdio.h>
int main()
{
    int num=10,i;
    for(i=7;i>=0;i--)
    {
        printf("%d",(num>>(i*3))&7);
    }
    
}
