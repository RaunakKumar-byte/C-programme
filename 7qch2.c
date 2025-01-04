# include<stdio.h>
# include<math.h>

int main(int argc, char const *argv[])
{
    // Q1) if its sunday & its snowing then print true
    int isSunday = 1;
    int isSnowing = 1;
    printf("%d\n", isSunday && isSnowing);

    // Q2) if its monday or(||) its raining then print true
    int isMonday = 0;
    int isRaining = 1;
    printf("%d\n", isMonday || isRaining);

    // Q3) if a number greater then 9 & less then 100 then print true
    int x;
    printf("enter  number");
    scanf("%d", &x);
    printf("%d\n", x>9 && x<100);
    return 0;
}
