#include<stdio.h>
int main() {
    int a[90],n,i;
    float m=0,p=0,l=0;
    scanf("%d",&n);
    printf("enter the element of array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    if(a[i]>0)
    m++;
    else if(a[i]<0)
    p++;
    else
    l++;
    }
    printf("%0.3f\n%0.3f\n%0.3f\n",m/n,p/n,l/n);
    return 0;
    }
