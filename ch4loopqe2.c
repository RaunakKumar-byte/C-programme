# include<stdio.h>

int main(int argc, char const *argv[])
{
    // sum of n natural number
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int sum = 0;
    for(int i; i<=n; i++) {
        sum = sum + i; // sum += i
    }
    printf("sum is %d", sum);

    //also print them in reverse

    for(int i= n; i >= 1;i-- ) {
        printf("%d\n", i);
    }

    return 0;
}
