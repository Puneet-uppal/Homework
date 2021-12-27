// Write a C program to check whether a number is even or odd
#include<stdio.h>

int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    if (num%2==0){
    printf("the number is even");}
    else{
    printf("the number is odd");}

    return 0;
}