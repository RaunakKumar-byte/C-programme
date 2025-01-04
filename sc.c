#include<stdio.h>
int main()
{
    char op;
    float first, second;
    printf("enter the operator(+,-,*,/)");
    scanf("%c"&op);
    printf("enter first operands");
    scanf("%f",&first);
    printf("enter second operands");
    scanf("%f",&second);
    switch(op)
    {
        case'+';
        printf(%f+%f=%f,first,second,first+second);
        break;
        case'-';
        printf(%f-%f=%f,first,second,first-second);
        break;
        case'*';
        printf(%f*%f=%f,first,second,first*second);
        break;
        case'/';
        printf(%f/%f=%f;first,second,first\second);
        break;
        deafult;
        printf("operator is not correct");

    }
    return 0;

}