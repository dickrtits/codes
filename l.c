#include<stdio.h>
int main() {
    char s1[50],s2[40];
    int n,i,j,a;
    scanf("%d\n",&a);
    while(a--)
    {
    scanf("%s%s",s1,s2);
    for(i=0;s1[i]!='\0';i++)
    {
        n=0;
    for(j=0;s2[j]!='\0';j++)
    {
    if(s1[i]==s2[j])
    n++;
    }
    }
    if(n)
    printf("yes\n");
    else
    printf("no\n");
    }
    return 0;
}


