#include <stdio.h> // Told C what we use lib to use
// Single line comment
/*

*/

// Print Hello World to the Screen
int main(void){
    #define CONSTANT_VALYE 12 // new constant
    printf("Hello World!\n");
    int garbage_variable; // this value will have whatever value that was in the address in RAM
    printf(garbage_variable);
    return 0;
}

// once you are done, type gcc -o hello helloworld.c 
// then, to run the code, run out output