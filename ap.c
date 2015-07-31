#include<stdio.h>
int main() {
    int a[60],n,i,m=0;
    scanf("%d",&n);
    printf("enter the element of array");
            for(i=0;i<n;i++)
            scanf("%d",&a[i]);
            for(i=0;i<=n-3;i++)
        {
                if(a[i+1]-a[i]==a[i+2]-a[i+1])
                m++;
                if(n-2==m)
                printf("series is a.p");
                    else
                        printf("series is not a.p");
                return 0;
            }
        }
