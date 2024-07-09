#include <stdio.h>

int main()
{
   int temp=0,num,rem;
   scanf("%d",&num);
   while(num)
   {
       rem=num%10;
       temp=temp*10+rem;
       num=num/10;
   }
   printf("%d",temp);
}