#include <stdio.h>

int main(){

    int joesAge = 55;     // An int variable
    int* ptr = &joesAge;  // A pointer variable, with the name ptr, that stores the address of myAge

    // Output the value of myAge (43)
    printf("%d\n", joesAge);

    // Output the memory address of myAge (0x7ffe5367e044)
    printf("%p\n", &joesAge);

    // Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);

    // what does this print out?
    printf("%d\n", *ptr);    


}