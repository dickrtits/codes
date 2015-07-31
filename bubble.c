#include<stdio.h>
int main() {
int a[30],n,i,j,m;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
m=a[j];
a[j]=a[j+1];
a[j+1]=m;
}
}
}
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
