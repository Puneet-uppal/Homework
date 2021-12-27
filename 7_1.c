// Write a C program to input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>

int main(){
    char ch;
    printf("Enter the Charachter\n");
    scanf("%c",&ch);

    if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    printf("the charachter is an alphabet");
    else
    printf("The charachter is not an alphabet");
    return 0;

}