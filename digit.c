#include<stdio.h>
#include<string.h>
int main()
{
   char ch;
   int cnt=0;
   scanf("%c",&ch);
   switch(ch)
   {
       case'1':cnt=1;
       break;
       case'2':cnt=1;
       break;
       case'3':cnt=1;
       break;
       case'4':cnt=1;
       break;
       case '5':cnt=1;
       break;
       case '6':cnt=1;
       break;
       case '7':cnt=1;
       break;
       case '8':cnt=1;
       break;
       case '9':cnt=1;
       break;
       case '0':cnt=1;
       break;
   }
   if(cnt==1)
   {
       printf("digit");
   }
   else
   printf("not a digit");
   
    
}