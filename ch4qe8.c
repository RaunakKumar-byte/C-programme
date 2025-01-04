# include<stdio.h>
// print reverse of table of numbr n
int main(int argc, char const *argv[])
{
    int n;
    printf("enter number n : ");
    scanf("%d", &n);

    int table;
    for(int i = 10; i >= 1; i--) {
    printf("%d\n", n*i);
    }
    
    return 0;
}
