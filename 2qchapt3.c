# include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("enter age");
    scanf("%d", &age);

    if(age >= 18) {
        printf("adult");
    }
    
    else if(age > 13 && age << 18) {
    printf("teenager");
    }

    else {
        printf("child");
    }
    return 0;
}


