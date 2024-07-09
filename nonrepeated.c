#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
    int i,j=0,cnt;
   char str[100],temp[100];
   scanf("%[^\n]s",str);
   for(i=0;str[i];i++)
   {
       cnt=0;
       for(j=0;str[j];j++)
       {
       if(str[i]==str[j])
       {
          cnt++;
       }
       }
       if(cnt==1)
       {
           printf("%c",str[i]);
       }
   }
   
   
}