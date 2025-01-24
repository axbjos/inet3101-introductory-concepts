/*
Author: Joe Axberg
Course: INET 3101
Program Name: Printing-Numbers

Creation Date: 1/15/2025
Last Update: 1/24/2025
*/

#include <stdio.h>

int main(){

    int x = 10;
    float y = 10.99;
    char myChar = 'J';

    //To print numbers a "formatter" must be used.  %d = "print this out as a decimal number"
    printf("%d", x);

    printf("%f", y);

    printf("%c", myChar);

    //Why wouldn't this work? This is what Python does right? Uncomment it and see...
    //printf(myChar);

    //Does this work? Uncomment it and try.
    //printf("%d", x+y );

}
