#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
   char ch,str[100];
   int i,cnt=0,cnt1=0,cnt2=0;
   scanf("%[^\n]s",str);
   for(i=0;str[i];i++)
   {
      if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
      {
          cnt++;
      }
      else if(str[i]>=48&&str[i]<=57)
      {
          cnt1++;
      }
      else
       {
           cnt2++;
       }
     
   }
   printf("alphabets=%d digits=%d special=%d",cnt,cnt1,cnt2);
}