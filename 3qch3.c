# include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int marks;
    printf("enter marks");
    scanf("%d", &marks);

   if(marks >= 90) {
    printf("a++");
   }
   else if(marks > 80 && marks < 70) {
    printf("b++");
   }
   else {
    printf("c++");
   }
    return 0;
}
