// Write a C program to input week number and print week day.
#include<stdio.h>

int main(){
    int wn,wd;
    printf("Enter the week number\n");
    scanf("%d",&wn);

    if(wn==1)
    printf("Today is Monday");
    else if (wn==2)
    printf("Today is Tuesday");
    else if (wn==3)
    printf("Today is wednesday");
    else if (wn==4)
    printf("Today is Thursday");
    else if (wn==5)
    printf("Today is Friday");
    else if (wn==6)
    printf("Today is Saturday");
    else if (wn==7)
    printf("Today is Sunday");

    return 0;

}