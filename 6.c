// Write a C program to check whether a year is leap year or no
#include<stdio.h>

int main(){
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);

    if (year%4==0||year%400==0&&year%100!=0)
    {
        printf("The input year is leap year");
    }
    else
    {
        printf("The input year is not a leap year");
    }
    return 0;

}