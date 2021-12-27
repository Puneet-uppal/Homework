// Write a C program to find maximum between two numbers.
#include<stdio.h>

int main(){
    float num1,num2;
    printf("Enter the two numbers\n");
    scanf("%f%f",&num1,&num2);

    if (num1>num2)
    printf("num1 is maximum");
    else
    printf("num2 is maximum");

    return 0;
}