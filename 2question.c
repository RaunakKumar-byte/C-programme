# include<stdio.h>
// area of circle
int main(int argc, char const *argv[])
{
    float pi;
    printf("enter pi");
    scanf("%f", &pi);

    float radius;
    printf("enter radius");
    scanf("%f", &radius);

    printf("area of circle is : %f", pi * radius * radius);
    return 0;
}
