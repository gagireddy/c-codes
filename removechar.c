#include <stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main() {
    
    char ch,str[10];
    scanf("%s",str);
    printf("enter the charecter");
    __fpurge(stdin);
    scanf("%c",&ch);
    __fpurge(stdin);
    char *p;
    p=str;
    while(p=strchr(p,ch))
    {
        memmove(p,p+1,strlen(p+1)+1);
    }
    printf("%s",str);
    
}
