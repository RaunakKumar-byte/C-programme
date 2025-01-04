#include<stdio.h>
//new adress=current adress-number*size of data type
int main(int argc, char const *argv[])
{
    int number=50;
    int*p;
    p =&number;
    printf("adress of p varible is %u",p);
    p=p-3;
    printf("after adding:adress of p varible is %u,p");
    return 0;
}



