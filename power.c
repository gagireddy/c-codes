#include<stdio.h>
#include<math.h>
int main()
{
    int val,power;
    scanf("%d %d",&val,&power);
    val=pow(val,power);
    printf("%d",val);
}