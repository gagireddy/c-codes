#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
    int i,j=0;//cnt;
   char str[100],temp;
   scanf("%[^\n]s",str);
   __fpurge(stdin);
   for(i=0;str[i];i++)
   {
       for(j=i+1;str[j];j++)
       {
           if(str[i]>str[j])
           {
               temp=str[i];
               str[i]=str[j];
               str[j]=temp;
           }
           
       }
   }
   printf("%s",str);
}