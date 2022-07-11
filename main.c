/**
  * @param Customer Billing System
  * @author ADITYA CHAUDHARY
  */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char name[20];
    int userOption,totalAmount = 0;
    char userChoice = 'y';
    printf("Restaurant Billing System\n");
    printf("\n");
    //Print Food Item Menu
    printMenu();
    printf("------------------------------------------------------------------------------\n");

    //Customer Name
    printf("Enter Name: ");
    scanf("%[^\n]s",name);

    printf("Welcome, %s",name);

    printf("\n");

    //Calculate Total amount
    while(userChoice == 'y'){
        //Give User to choose food item
        printf("\n");
        printf("Food Code: ");
        scanf("%d",&userOption);

        //Calculate Function
        totalAmount = calculateAmount(userOption,totalAmount);

        printf("Total Amount: %d\n",totalAmount);

        printf("Want to add more ? y/n\n");
        scanf("%s",&userChoice);
    }

    printf("------------------------------------------------------------------------------\n");
    printf("\tAMOUNT TO BE PAID (in rupees): ");
    printf("%d\n",totalAmount);

    printf("\n");
    printf("Thankyou, %s",name);

    printf("\n");

    return 0;
}

int calculateAmount(option,amount){
    int sum,priceflag;

    switch(option){
        case 1:
            priceflag = 10;
            break;
        case 2:
            priceflag = 20;
            break;
        case 3:
            priceflag = 10;
            break;
        case 4:
            priceflag = 100;
            break;
        default:
            priceflag = 0;
            printf("Oops ! Wrong option \n");
    }

    //Calculate
    sum = amount + priceflag;

    //Return value of sum
    return sum;
}

void printMenu(){
    printf("Choose Food Items: \n");

    //Title

    printf("\tItem\tAmount\tPrint Code\n");

    //Food Item with Codes

    //Chai
    printf("\tChai\t10\tCode  1\n");
    //Coffee
    printf("\tCoffee\t20\tCode  2\n");
    //Samosa
    printf("\tSamose\t15\tCode  3\n");
    //Pizza
    printf("\tPizza\t100\tCode  4\n");
}
