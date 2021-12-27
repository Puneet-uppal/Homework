// Write a C program to check whether the triangle is
// equilateral, isosceles or scalene triangle.
#include<stdio.h>

int main(){
    float s1,s2,s3;
    printf("Enter the sides of triangle\n");
    scanf("%f%f%f",&s1,&s2,&s3);

    if((s1==s2&&s2==s3&&s3==s1&&s1+s2>s3)&&s2+s3>s1&&s3+s1>s2)
    printf("The triangle is equilateral triangle");
     else if ((s1!=s2&&s2!=s3&&s1!=s3)&&s1+s2>s3&&s2+s3>s1&&s3+s1>s2)
    printf("The triangle is scalene triangle");
    else if((s1==s2&&s2!=s3||s2==s3&&s3!=s1||s3==s1&&s1!=s2)&&s1+s2>s3&&s2+s3>s1&&s3+s1>s2)
    printf("The triangle is isosceles triangle");
    else
    printf("The triangle is not possible");
   
    
    return 0;

}