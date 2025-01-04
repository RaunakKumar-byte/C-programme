# include<stdio.h>
#include<math.h>
// nested switch
int main(int argc, char const *argv[])
{
    int number;
    printf("enter number");
    scanf("%d", &number);

 if(number >= 0) {
    printf("positive");
    
    if(number % 2 == 0) {
        printf("even");
    }else {
        printf("odd");
    }
 }
 else {
    printf("negative");
 }
    
    return 0;
}
