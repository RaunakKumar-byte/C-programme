#include<stdio.h>
void change(int num)
{
    printf("before adding value inside function =%d",num);
    num=num+100;
    printf("affter adding value inside function =%d",num);
}
int main(int argc, char const *argv[])
{
    int x=100;
    printf("before function call =%d",x);
    change(x);
    printf("after function call =%d",x);
    return 0;
}


