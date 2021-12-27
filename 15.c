// Write a C program to find all roots of a quadratic equation.
#include<stdio.h>
#include<math.h>

int main(){
    float r1,r2,equation,a,b,c,x;
    printf("Enter the values of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    equation=a*pow(x,2)+b*x+c;
    r1=(b+sqrt(pow(b,2)-4*a*c))/a;
    r2=(b-sqrt(pow(b,2)-4*a*c))/a;

    if (pow(b,2)>4*a*c)
    printf("The roots are real and their values are %f,%f",r1,r2);
    else if(pow(b,2)<4*a*c)
    printf("The roots are imaginary and their values are %f,%f",r1,r2);
    return 0;
}