# include<stdio.h>
# include<math.h>
// write a programme to cheak if a number is divisible by 2 or not
// use modular operator
// x /2 if remainder 0 then divisible if remainder 1,2,3,4,5....et
// then not divisble
// even then print 1
// odd then print 0

int main(int argc, char const *argv[])
{
    int x;
    printf("enter x");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    return 0;
}
