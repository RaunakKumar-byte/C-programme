# include<stdio.h>
#include<math.h>


int main(int argc, char const *argv[])
{
    char ch;
    printf("enter chracter : ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch<= 'Z') {
        printf("upper case");
    }
        else if(ch >= 'a' && ch <= 'z') {
            printf("lower case");
    }
    else {
        printf(" not a english letter");
    }


    return 0;
}
