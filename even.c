#include<stdio.h>
int main()
{
int a[50],n,i,m=0,p=0;
scanf("%d",&n);
printf("enter the element of array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++){
if(a[i]%2==0)
m++;
else
p++;
}
printf("even no=%d\n",m);
printf("odd no=%d\n",p);
return 0;
}
