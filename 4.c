// Write a C program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>

int main(){
    int num;
    printf("Enter the number\n");
    scanf("%f",&num);

    if (num%5==0&&num%11==0)
    printf("The number is divisible by both 11 and 5");
    else
    printf("The number is not divisible by 11 and 5");

    return 0;
}