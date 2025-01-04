# include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int mmarks;
    printf("enter mmarks  : ");
    scanf("%d", &mmarks);

    int smarks;
    printf("enter smarks  : ");
    scanf("%d", &smarks);
    if (mmarks > 100 || smarks > 100){
        printf("fuck you");
    }
    else if (mmarks >= 33 && smarks >= 33) {
        printf("awrded 45 rupees");
    }
    else if(smarks >= 33) {
        printf("awarde 15 rupees");

        
    }
    else if(mmarks >= 33) {
        printf("awrded 15 ruppes");
    }
    
    else if(smarks < 33 && mmarks < 33) {
        printf("you will be wokachoda fuck you");
    }
    else {
        printf("invalid marks");
    }
    
    return 0;
}
