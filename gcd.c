#include<stdio.h>

int find_gcd(int a, int b) {
    if(b==0)
        return a;
    else
        return find_gcd(b, a%b);
}

int main() {
        int a[60],i,n,gcd;
            scanf("%d",&n);
            printf("enter the element of array");
            for(i=0;i<n;i++)
                scanf("%d",&a[i]);
            gcd=a[0];
            for(i=1;i<n;i++) {
                gcd = find_gcd(gcd, a[i]);
            }
            printf("gcd=%d", gcd);
            return 0;
            }

