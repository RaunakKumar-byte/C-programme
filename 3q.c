# include<stdio.h>
// perimeter of rectengle

int main()
{
    float length;
    printf("enter length");
    scanf("%f" , &length);

    float breath;
    printf("enter breath");
    scanf("%f" , &breath);

    printf("Perimetr of rectengle is : %f" , 2 * length + breath * 2);
    return 0;
}
