# include<stdio.h>
#include<stdio.h>
// ternary operator= condition ? do somethin ig true : do something if false;
int main(int argc, char const *argv[])
{
    int age;
    printf("enter age");
    scanf("%d", &age);

    age >= 18 ? printf("adult \n") : printf("not adult \n");
    return 0;
}
