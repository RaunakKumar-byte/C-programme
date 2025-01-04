# include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int marks;
    printf("enter marks(0-100) : ");
    scanf("%d", &marks);

    if(marks > 30) {
        printf("pass");
      }  else if(marks > 30 && marks <= 100) {
        printf("pass");
      } 

        
    
    else {
        printf("fail");
    }
    return 0;
}
