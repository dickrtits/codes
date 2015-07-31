#include<stdio.h>
int main() {
    int k[60],n,i,max,m,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&k[i]);
    scanf("%d",&m);
    printf("enter selecting element");
    for(i=0;i<m;i++)
    scanf("%d",&k[i]);
    max=k[0];
    min=k[0];
    for(i=1;i<m;i++)
    {
        if(k[i]>k[0])
        max=k[i];
        else
        min=k[i];
    }
    printf("%d\n",max);
    printf("%d\n",min);
        printf("%d",max-min);
        return 0;
        }
