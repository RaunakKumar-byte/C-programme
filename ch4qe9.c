# include<stdio.h>

// print sum of all no between 5 and 50

int main(int argc, char const *argv[])
{
    int sum =0;
    for(int i=5; i<=50; i++) {
        sum = sum + i;
    }
    printf("sum is %d\n", sum);
    return 0;
}
