#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
   char ch,str[100];
   int i;
   scanf("%[^\n]s",str);
   __fpurge(stdin);
   scanf("%c",&ch);
   for(i=0;str[i];i++)
   {
       if(str[i]==32)
       {
           str[i]=ch;
       }
   }
   printf("%s",str);
   
   
   
}