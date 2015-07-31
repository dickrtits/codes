#include<stdio.h>

int main() {
    int i, a, b, j;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++) {
        int flag = 0;
        for(j=2; j<i; j++) {
            if(i%j==0)
                flag++;
        }
        if(!flag) {
            printf("%d ", i);
        }
    }
    return 0;
}
