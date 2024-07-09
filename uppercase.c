#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
   char ch,str[100];
   int i;
   scanf("%[^\n]s",str);
   for(i=0;str[i];i++)
   {
       if(str[i]>=96&&str[i]<=122)
       {
           str[i]^=32;
       }
   }
   printf("%s",str);
  
   
   
   
}