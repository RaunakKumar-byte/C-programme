# include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    if(age > 18){
        printf("adult ");
        printf("they can drive a car ");
        printf("they can drunk ");
    }
    else {
        printf("not adult ");
    }
    printf("thank you");
    return 0;
}
