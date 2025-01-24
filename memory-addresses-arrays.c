#include <stdio.h>

int main(){

    //simple array creation
    int numList[] = {25, 50, 75, 100};

    printf("%p \n", numList);

    //does this work?
    printf("%p \n", &numList);

    //do you get the same memory location?
    printf("%p \n", &numList[0]);
    printf("%p \n", &numList[1]);    
    printf("%p \n", &numList[2]);
    printf("%p \n", &numList[3]);

    //based on what you see output from the above - how many bytes are used to store and integer

    //create a for loop that loops through all positions of the array and prints out the memory location values

    //create a program just like this one that does the same for a character array.


}