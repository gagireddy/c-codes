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
       cnt=0;
       switch(str[i])
       {
           case'a':cnt++;
           break;
           case'e':cnt++;
           break;
           case'i':cnt++;
           break;
           case'o':cnt++;
           break;
           case'u':cnt++;
       }
       if(cnt>0)
       {
       if(str[i]>=96&&str[i]<=122)
       {
           str[i]^=32;
       }
       }
   }
   printf("%s",str);
  
}