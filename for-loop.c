#include <stdio.h>

int main(){

    int numList[] = {25, 50, 75, 100};
    
    //declare an Iterator

    int i;

    //for definition: starting number, how many, short hand for increment by one
    for (i = 0; i < 4; i++) {
        printf("%d\n", numList[i]);
    }

    //how about this?
    for (i = 0; i < 4; i=i+1) {
        printf("%d\n", numList[i]);
    }

    //how about this?
    for (i = 0; i < 4; i=i+2) {
        printf("%d\n", numList[i]);
    }

    //what happens here?
    for (i = 0; i < 5; i++) {
        printf("%d\n", numList[i]);
    }
}