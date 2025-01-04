# include<stdio.h>

// qe>4 keep taking number as input from user until enters an odd no

int main(int argc, char const *argv[])
{
    int n;
    
    
    do{
        printf("enter n : ");
scanf("%d", &n);
printf("%d\n", n);
   if(n % 2 !=0) {
    break;
   }


    }while(1);
    printf("thank you");
    return 0;
}
