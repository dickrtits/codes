#include<stdio.h>
#include<math.h>
int main() {
    int n,i,m,p,k,l,a;
    scanf("%d",&a);
    while(a--)
    {
    scanf("%d",&n);
    m=5*n*n+4;
    p=5*n*n-4;
    l=sqrt(m);
    k=sqrt(p);
    if(l*l==m||k*k==p)
    printf("\nIsfibo");
    else
    printf("\nIsNotfibo");
    }
}
