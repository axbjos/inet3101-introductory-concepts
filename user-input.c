#include <stdio.h>

// declare a variable to hold the user input, assume you're going to get a number
int userNum;

int main(){


    // prompt 'em
    printf("Type a number: \n");

    //get the number from the user using the "scanf" function.  
    // whats the deal with the & symbol?  your first exposure to the concept of a pointer...
    scanf("%d", &userNum);

}