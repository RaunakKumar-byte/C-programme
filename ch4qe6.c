# include<stdio.h>

// print all odd no from 5 to 50
int main(int argc, char const *argv[])
{
    for(int i = 5; i <= 50; i++) {
        
        if(i % 2 != 0) {
            printf("%d\n", i);
            
        }
    }

    

    return 0;
}
