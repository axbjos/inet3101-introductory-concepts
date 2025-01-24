#include <stdio.h>

int main(){

    int joesAge = 55;
    printf("%p", &joesAge);

    // a memory location will be printed out
    // it is in HEXADECIMAL - something like: 0x16f05760c
    // why HEX?
    // compile this code once and then run multiple times
    // does the memory location stay the same or does it change?

    // POINTERS
    // Value of a variable:  joesAge
    // Location of a variable: &joesAge

}