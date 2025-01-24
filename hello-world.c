// This is a comment - it can be placed anywhere in the code.  The compiler will ignore it.

/* This
is
a 
multiline
comment
*/

/*
   The following statement is an "include" statement.  It tells the compiler to link your code to a library
   of code that already exists on your system. It is like using a "import" statement in Python. The include library must have < and > surrouding it.
   This is the stdio library or "Standard Input/Output" library. It includes functions such as "printf" and "scanf" for command line input/output (aka I/O)
   It is part of the standard "C Library" of code. 
*/

#include <stdio.h>

// all programs must have a main function named "main"
// Functions should have a data type - the type of data the function will return when done.
// The () defines what data should be passed to the function - for main functions this is usually blank.

int main() {

    //Here is the printf function.  It is being passed literal characters
    printf("Hello World");

    //Good practice for C programs...especially in the Unix world is to have the main function return a Zero when complete.
    //This let's the operating system know the program completed successfully.
    return 0;

}

/* 
Compile this code:

Windows:  cl hello-word.c
Mac: clang hello-world.c -o hello-world

Then run the compliled executable.

Compare the output of this code to the Python "hello-world.py"

Do you see something different?
*/