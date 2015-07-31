#include<stdio.h>
int main() {
int n,m,p=0;
scanf("%d",&n);
while(n>=1)
{
m=n%10;
if(n%m==0)
p++;
}
printf("%d",p);
return 0;
}
