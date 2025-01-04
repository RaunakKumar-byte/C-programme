# include<stdio.h>
#include<math.h>
// this print x is equal to 1 because for cheaking we use == but here is = that means it 
// replace x=2 from x=1

int main(int argc, char const *argv[])
{
  int x = 2;
  if(x = 1) {
    printf("x is equal to 1");
  }
  else {
    printf("x is not equal to 1");
  }
    return 0;
}
