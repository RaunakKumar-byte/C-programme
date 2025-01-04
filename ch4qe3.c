# include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    
    
    for(int i = 1; i<=10; i++) {
        printf("%d\n", n*i);
    }

    
    
    return 0;
}
