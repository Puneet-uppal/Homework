// Write a C program to check whether a character is alphabet or not.
#include<stdio.h>
#include<math.h>

int main(){
    char Char;
    int value;
    printf("Enter the charachter\n");
    scanf("%c",&Char);
    printf("%d\n",Char);
    printf("Enter value mentioned above\n");
    scanf("%d",&value);

    if ((value>64)&&(value<91))
    {printf("The character is an Alphabet");}
    else
     if((value > 96)&&(value <123))
    {printf("The charachter is an Alphabet");}
    else
    printf("The charachter is not an Alphabet");
    

    return 0;


}