#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
    char str1[20];
    scanf("%[^\n]s",str1);
    __fpurge(stdin);
    char str2[20];
    scanf("%[^\n]s",str2);
    int i,j,a,b;
    int count=0;
    a=strlen(str1)-1;
    b=strlen(str2)-1;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(str1[i]==str2[j])
            {
                count++;
            }
        }
        if(count<1)
        {
            printf("not anagram");
            break;
        }
    }
    if(count==a)
    {
        printf("anagram");
    }
}
