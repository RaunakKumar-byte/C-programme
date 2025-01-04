# include<stdio.h>

void namaste();
void bonjour();

int main(int argc, char const *argv[])
{
    
    
    printf("enter f for frenche and i for indian : ");
    char ch;
    scanf("%d", &ch);

    if(ch == 'i') {
        namaste();
    }
    else   {
        bonjour();
    }
    return 0;
}

void namaste() {
    printf("namaste");
}
void bonjour() {
    printf("bonjour");
}
