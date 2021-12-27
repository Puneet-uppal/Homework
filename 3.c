// .Write a C program to check whether a number is negative, positive or zero.
#include <stdio.h>

int main(){
    float num;
    printf("Enter the number\n");
    scanf("%f",&num);

    if (num>0)
    printf("the number is positive");
    else if(num==0)
    printf("the number is equal to zero");
    else if (num<0)
    printf("the number is negative");

    return 0;
}