// Write a C program to find maximum between three numbers.
#include<stdio.h>

int main(){
    float num1,num2,num3;
    printf("Enter the three numbers\n");
    scanf("%f%f%f",&num1,&num2,&num3);

    if (num1>num2&&num1>num3)
    printf("num1 is maximum");
    else if (num2>num1&&num2>num3)
    printf("num2 is maximum");
    else if (num3>num1&&num3>num2)
    printf("num3 is maximum");

    return 0;
}