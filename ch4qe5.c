# include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    do {
        printf("enter n");
        scanf("%d", &n);
        printf("%d\n", n);

        if(n % 7 == 0) {
            break;
        }

    } while(1);
    printf("thank yoy");
    return 0;
}
