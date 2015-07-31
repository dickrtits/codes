#include<stdio.h>
int main()
{
int a[70],n,i,j,m,b=1;
scanf("%d",&n);
printf("enter the element of array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
m=a[i];
a[i]=a[j];
a[j]=m;
}
}
}
for(i=0;i<n;i++){
    for(j=1;j<n;j++)
    {
    a[i]==a[j];
    b++;
    }
                }
    if(b%2==0)
    printf("%d\n",a[i]);
}
