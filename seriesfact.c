#include<stdio.h>
int main(){
  long f=1;
  int i,num,min,max;

  printf("Enter the minimum range: ");
  scanf("%d",&min);

  printf("Enter the maximum range: ");
  scanf("%d",&max);

  printf("Factorial series in given range: ");
  for(num=min;num<=max;num++){
    f=1;

    for(i=1;i<=num;i++)
      f=f*i;

    printf("%ld\n ",f);
  }

  return 0;
}
