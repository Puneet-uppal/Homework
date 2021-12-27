// Write a C program to input month number and print number of days in that month.
#include<stdio.h>

int main(){
    int mn;
    printf("Enter the month number\n");
    scanf("%d",&mn);

    if (mn==1||mn==3||mn==5||mn==7||mn==8||mn==10||mn==12)
    printf("Number of days in this month is 31");
    else if (mn==4||mn==6||mn==9||mn==11)
    printf("The number of days in this month is 30");
    else if (mn==2)
    printf("This is a leap year,normally it has 28 days but after every 4 years it has 29 dayss");
    return 0;
}