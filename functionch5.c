# include<stdio.h>
//declaration/prototype
void printHello();

 int main(int argc, char const *argv[])
 {
    printHello(); //function call
    printHello();
    return 0;
 }
 void printHello() {  //function defination
    printf("Hello!\n"); 
 }
 