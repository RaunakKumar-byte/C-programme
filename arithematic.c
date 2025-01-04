#include<stdio.h>
int main(int argc, char const *argv[])


{
    char op;
    float first,second;

    printf("enter an operands(+,-,*,/)");
    scanf("%c",&op);
    printf("enter first ");
    scanf("%f",&first);
    printf("enter second");
    scanf("%f",,&second);
    switch(op)
{
    case'+':
    printf("%f+%f=%f",first,second,first+second);
    break;

    case'-':
    printf("%f-%f=%f",first,second,first-second);
    break;
    case'*':
    printf("%f*%f=%f",first,second,first*second);
    break;
    case'/':
    printf("%f/%f=%f",first,second,first/second);
    break;
    default:
    printf("operator is not correct");
}
  return 0;
}