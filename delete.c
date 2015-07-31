#include<stdio.h>
int main() {
    int a[60],n,i,k;
    scanf("%d",&n);
    printf("enter the  element of array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    while(k<n)
    {
    a[k-2]=a[k-1];
    k++;
    }
    n--;
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    }
