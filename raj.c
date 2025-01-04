# include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("enter age");
    scanf("%d", &age);

    if("age > 18") {
        printf("adult");
    }
    else{
        printf("not adult");
    }

    return 0;
}
