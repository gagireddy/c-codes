#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
    //int i,j=0,cnt;
   char str[100],temp[100];
   scanf("%[^\n]s",str);
   __fpurge(stdin);
   scanf("%[^\n]s",temp);
   strcpy(str,temp);
   printf("%s",str);
   
   
}