#include<stdio.h>
int main() {
int a[70],n,i,m,p=0;
scanf("%d",&n);
printf("enter the element of array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
m=a[i]%10;
if(a[i]%m==0)
p++;
}
printf("%d",p);
}
