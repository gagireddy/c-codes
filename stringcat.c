#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
   char ch,str[100],str1[100];
   int i,cnt=0;
   scanf("%[^\n]s",str);
   __fpurge(stdin);
   scanf("%[^\n]s",str1);
   strcat(str,str1);
   printf("%s",str);
}