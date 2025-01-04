#include <stdio.h>
int main(int argc, char const *argv[])
{
  
  int i,n,sum=1;
  long fact=1;

  printf("enter the value of n");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    fact=fact*i;
    sum=sum+fact;
  }
  printf("the sum of factorial is 0!+1!+2!+3!... %d! is: %d",n,sum);

    return 0;
}
