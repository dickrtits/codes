#include<stdio.h>
int main() {
    int a[50],n,i,m,e;
    scanf("%d",&e);
    while(e--)
    {
    scanf("%d",&n);
    printf("enter the element of array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
            scanf("%d",&m);
                for(i=0;i<n;i++)
        {
            if(a[i]==m)
                printf("%d\n",i+1);
        }
    }
        return 0;
            }
