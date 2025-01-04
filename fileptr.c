#include<stdio.h>
int main()

Fie *fileptr;
int count_lines=0;
char file[40],chr;
printf("enter file name ");
scanf("%s",filechar);
fileptr=fopen(filechar,"r");

chr=getc(fileptr);
while(chr!=='n')
{
    count_lines=count_lines+1;
}
chr=getc(fileptr);