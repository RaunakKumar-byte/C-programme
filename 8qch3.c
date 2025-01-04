# include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int marks;
    printf(" enter marks : ");
    scanf("%d", &marks);

    if(marks >= 90 && marks <= 100) {
        printf("a+");
    }
    else if(marks < 90 && marks >= 70) {
        printf("a");
    }
    else if(marks < 70 && marks >= 30) {
        printf("b");
    }
    else if(marks < 30) {
        printf("c");
        
        }
        
    else {
        printf("wrong marks");
    }
    return 0;
}
