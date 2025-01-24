#include <stdio.h>

int main(){

    //simple array creation
    int numList[] = {25, 50, 75, 100};

    //print out a specific element

    printf("%d", numList[0]);

    //change a value
    numList[2] = 76;

    //How big is the array? Use the "sizeof" function

    printf("%lu", sizeof(numList));

    //the above will be print out as "bytes"

    //what if you don't know the data that is going to be in the array?

    //WRITE a program that captures integers from the user and stores them in the array
    //how big should the array be?

}