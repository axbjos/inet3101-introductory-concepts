// think of a structure as a way to group variables together and think of them as "one thing"
// you can kind of think of them as a "record"

#include <stdio.h>

// structures are usually defined outside of the main function

struct sampleStructure {
  int firstNum;
  int secondNum;
  char firstChar;
  char secondChar;

};

int main(){

    //create a structure
    struct sampleStructure struct1;

    //set the structs values
    struct1.firstNum = 5;
    struct1.firstChar = 'C';
    struct1.secondNum = 6;
    struct1.secondChar = 'D';

    //create another structure
    struct sampleStructure struct2;

    struct2.firstNum = 6;
    struct2.firstChar = 'D';
    struct2.secondNum = 7;
    struct2.secondChar = 'E';

    //easier way

    struct sampleStructure struct3 = {7, 'E', 8, 'F'};

    // print something
    printf("%d %c %s %c \n", struct3.firstNum, struct3.firstChar, struct3.secondNum, struct3.secondChar);


}