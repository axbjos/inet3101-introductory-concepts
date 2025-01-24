// The C programming language does not have a data type of "string"
// Strings are character arrays.

#include <stdio.h>

int main() {

    char helloWorld[] = "Hello World!";

    // The %s formatter is used here to indicate that the variable holds multiple characters.
    // One might say it is a "string of characters" - or "string" for short.
    printf("%s", helloWorld);

    // A string aka "character array" can be indexed like any other array
    // Have it print out the character at index 4 in the array

    printf("%c", helloWorld[4]);

    // You could even change a value in the array
    helloWorld[6] = 'h';

    printf("%c", helloWorld);

}