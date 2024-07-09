#include<stdio.h>
#include<string.h>
int main()
{
   char ch;
   int cnt=0;
   scanf("%c",&ch);
   switch(ch)
   {
       case'a':cnt=1;
       break;
       case'e':cnt=1;
       break;
       case'i':cnt=1;
       break;
       case'o':cnt=1;
       break;
       case 'u':cnt=1;
       break;
   }
   if(cnt==1)
   {
       printf("vowel");
   }
   else
   printf("consonant");
   
    
}