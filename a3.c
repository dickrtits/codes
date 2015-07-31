#include<stdio.h>
int main() {
    int a[60],b[90],n,i,j,m;
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
   while(n>=1)  {
for(i=1;i<n;i++){
b[i]=a[i]-a[0];
printf("%d\n",b[i]);
}
n--;
}
    return 0;
}
