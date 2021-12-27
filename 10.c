// Write a C program to check whether a character is uppercase or lowercase alphabet.
#include<stdio.h>

int main(){
    char ch;
    printf("Enter the charachter\n");
    scanf("%c",&ch);

    if (ch>='a'&&ch<='z')
    printf("The charachter is lower case alphabet");
    else if (ch>='A'&&ch<='Z')
    printf("The charachter is upper case alphabet");

    return 0;
}