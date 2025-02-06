/**************************************
*
* Program Name: Parts Inventory Manager
*
* Author: Joe Axberg
* Created: 2/4/2025
*
***************************************/

#include <stdio.h>

// notice this function is "void" it is not
// going to return anything back to the calling
// function aka "main"
void printRecords(){

    printf("\n\nNothing to see here yet\n\n");

}

void passValue(int mySelection){

    printf("\nInvoking the passValue Function\n");
    printf("\n\nYou entered: %d\n\n", mySelection);

}

int passAndReturn(int sampleValue){

    printf("\n\nInvoking the passAndReturn Function\n");
    printf("\nYou entered: %d\n", sampleValue);
    printf("\nChanging it to a 7 which will end the program - buh bye!\n\n");
    return(7);

}

int main() {

    int looper = 6;
    int selection;

    while (looper <= 6){

        printf("\n\nParts Inventory Manager\n\n");
        printf("1. Print all records\n");
        printf("2. Add a Record\n");
        printf("4. Pass a Value\n");
        printf("5. Pass and Return a Value\n");
        printf("7. Exit\n\n");

        printf("Please enter your selection: ");
        scanf("%d", &selection);

        switch (selection) {

            case 1:
                printRecords();
                break;

            case 4:

                passValue(selection);
                break;
            
            case 5:

                looper = passAndReturn(selection);
                break;

            case 7:
                printf("\n\nExiting Now...\n\n");
                looper = selection;
                break;
        }

    }

    //return 0 lets the operating system know we gracefully ended our program
    return 0;

}