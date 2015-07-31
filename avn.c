#include<stdio.h>
void main()
{
int a=1,b=1,c=0,i,n;
scanf("%d",&n);
printf("%d\n%d\n%d\n",c,a,b);
for(i=0;i<n;i++)
{
c=a+b;
if(c<n)
{
printf("%d\n",c);
}
a=b;
b=c;}
return 0;
}
