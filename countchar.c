#include <stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main() {
    
    char ch,str[10];int cnt=0;
    scanf("%s",str);
    printf("enter the charecter");
    __fpurge(stdin);
    scanf("%c",&ch);
    char *p;
    p=str;
    while(p=strchr(p,ch))
    {
        cnt++;
        p++;
    }
    printf("%d",cnt);
    
}
