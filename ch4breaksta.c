# include<stdio.h>

int main(int argc, char const *argv[])
{
    for(int i=1; i<=5; i++) {
        if(i == 3) {
            break;
        }
        printf("%d\n", i);
    }
    printf("end");
    return 0;
}
