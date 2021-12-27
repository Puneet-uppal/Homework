// .Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
// Calculate percentage and grade according to following:
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F
#include<stdio.h>

int main(){
    int mm,mp,mc,mb,mcp,Per;
    printf("Enter the marks in all the subjects\n");
    scanf("%d%d%d%d%d",&mp,&mc,&mb,&mm,&mcp);

    Per=mp+mb+mc+mcp+mm/500*100;

    if (Per >= 90)
    printf("Grade-A");
    else if (Per >= 80)
    printf("Grade-B");
    else if (Per >= 70)
    printf("Grade-C");
    else if( Per >= 60)
    printf("Grade-D");
    else if (Per >= 40)
    printf("Grade-E");
    else if (Per < 40)
    printf("Grade-F");
    return 0;
}