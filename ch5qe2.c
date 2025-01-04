# include<stdio.h>

void printhello();
void printgoodbye();

int main(int argc, char const *argv[])
{
    printhello();
     printgoodbye();
    return 0;
}
void printhello() {
    printf("hello!");
}
void printgoodbye() {
    printf("goodbye");
}
