#include<stdio.h>
#include<math.h>
int main() {
        int c=0,m,a,b,i;
        scanf("%d%d",&a,&b);
        for(i=a;i<=b;i++)
        {
        m=pow(i,0.5);
if(m*m==i)
c++;
        }
        printf("%d",c);

        return 0;
        }
