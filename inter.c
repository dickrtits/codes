#include<stdio.h>
#include<string.h>
int main() {
char s1[90],s2[70];
int i,j,k,n,c[90];
scanf("%s%s",s1,s2);
for(i=0;s1[i]>1;i++)
 {
  n=0;
  for(j=0;s2[j]>1;j++)
  {
   if(s1[i]==s2[j])
   {
    n++;
    break;
   }
  }
  if(n==1)
  {
   c[k]=s1[i];
   k++;
  }
 }
 if(k==0)
  printf("no\n");
 else
  printf("yes\n");
 }
