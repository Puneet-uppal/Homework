// Write a C program to count total number of notes in given amount.
//  give first preference to Rs.2000 note then Rs.1000 and soon
#include<stdio.h>

int main(){
    int amount,rs23,rs13,rs52;
    printf("Enter the amount\n");
    scanf("%d",&amount);

    
    if (amount%2000==0)
    {rs23=amount/2000;
    printf("the number of notes of 2000 is %d",rs23);
    }
    else if (amount%2000!=0&&amount%1000==0)
    {
        rs23=amount/2000;
        amount=amount%2000;
        rs13=amount/1000;
        
        printf("the number of notes of 2000 is %d and of 1000 is %d",rs23,rs13);
    }
    else if(amount%2000!=0&&amount%1000!=0&&amount%500==0)
    {
        rs23=amount/2000;
        amount=amount%2000;
        rs13=amount/1000;
        amount=amount%1000;
        rs52=amount/500;
        printf("the number of notes of 2000 is %d ,1000 is %d and 500 is %d",rs23,rs13,rs52);


    }//so on the program will go on like this for 100,50,20 and10
    
    // rs13=amount/1000;
    // amount=amount%1000;
    // rs52=amount/500;
    // amount=amount%500;
    // rs12=amount/100;
    // amount=amount%100;
    // rs51=amount/50;
    // amount=amount%50;
    // rs21=amount/20;
    // amount=amount%20;
    // rs11=amount/10;
    // amount=amount%10;
    return 0;
}

