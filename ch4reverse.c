# include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);

     int sum = 0;
    for(int i=1, j=n; i<=n && j>=1; i++,j--){
        sum = sum + j;
        
        printf("%d\n",j);
    }
    printf("sum is %d\n", sum);
    
    return 0;
}
