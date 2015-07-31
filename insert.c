#include<stdio.h>
int main() {
    int a[40],n,i,k,m;
        scanf("%d",&n);
        printf("enter the element of array");
            for(i=0;i<n;i++)
                    scanf("%d",&a[i]);
                printf("enter the position which insert element");
                    scanf("%d",&k);
                printf("enter element to be insert");
        scanf("%d",&m);
            for(i=n;i>=k;i--)
        {
            a[i]=a[i-1];
        }
        n++;
        a[k-1]=m;
        for(i=0;i<n;i++)
    printf("%d\n",a[i]);
            }

