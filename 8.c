// Write a C program to input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>

int main(){
    char ch,a;
    printf("Enter the charachter\n");
    scanf("%c",&ch);

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')//similarly we have to do with capital letters
    printf("the charachter is a vowel");
    else
    printf("the charachter is a consonant");
    return 0;
}