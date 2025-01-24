// No need to include the <stdio.h> library if I/O is not used.  Here we are only doing math - that's built-in to C.

int main() {

    int x = 1;
    int y = 2;
    int z;

    z = x + y;

}

/*
Variables must be declared in C and you must indicate what kind of data the variable will hold.
The above variables all will be holding INTEGER values.

Probably not best practice to declare a variable and not initialize it with a variable.

Memory will be set aside for variable "z" but will have garbage in it.

Better to:

int z = 0;

Please look at the generated Assembly Language for this program in hello-world.s

You can tell the compiler to generate readable Assembly by using the -S switch

clang -S math-only.c

*/