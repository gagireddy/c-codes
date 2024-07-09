#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
   char ch,str[100];
   int i,j,k,cnt,cnt1=0;
   scanf("%[^\n]s",str);
   for(i=0;str[i];i++)
   {
       cnt=0;
       for(j=i+1;str[j];j++)
       {
           if(str[i]==str[j])
           {
               cnt++;
           }
       }
       if(cnt>cnt1)
       {
           cnt1=cnt;
           k=i;
       }
   }
   printf("heighest frequency char=%c",str[k]);
}