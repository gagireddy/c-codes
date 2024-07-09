#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
   char ch,str[100];
   int i,cnt=0;
   scanf("%[^\n]s",str);
   for(i=0;str[i];i++)
   {
       if(str[i]==32)
       {
           memmove(str+i,str+i+1,strlen(str+i+1)+1);
       }
   }
   printf("%s",str);
}