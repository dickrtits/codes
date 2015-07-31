#include<stdio.h>
int main()
{
long int a[10],n,i,max,min;
scanf("%d",&n);
printf("enter the element of array");
for(i=0;i<n;i++)
scanf("%ld",&a[i]);
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>a[0])
max=a[i];
else
min=a[i];
}
printf("maximum no=%ld\n",max);
printf("minimun no=%ld\n",min);
return 0;
}
