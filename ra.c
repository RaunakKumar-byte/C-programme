# include<stdio.h>
#include<stdio.h>
// switch conditional operator

int main(int argc, char const *argv[])
{
    int day; // 1-monday; 2-tuesday...
    printf("enter day(1-7) : ");
    scanf("%d", &day);

    switch (day) {
       
        case 1 : printf("monday");
               // break;
 case 2 : printf("tuesday");
              //  break;

             case 3 : printf("wednesday");
              //  break;

                 case 4 : printf("thrusday");
             //   break;
case 5 : printf("frida");
              //  break;

                 case 6 : printf("saterday");
              //  break;

                 case 7 : printf("sunday");
                // break;
 default : printf("not a valid day");



    }
    return 0;
}
