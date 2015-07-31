#include<stdio.h>
int main() {
    char s1[90],s2[80];
    int i,n=0;
    scanf("%s",s1,s2);
    for(i=0;s1[i]!='\0';i++)
    {
        for(i=0;s2[i]!='\0';i++)
        {
            if(s1[i]==s2[i])
            n++;
            break;
        }
    }
    if(n==1)
    printf("yes");
    else
    printf("no");
    }
