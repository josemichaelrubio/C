#include <stdio.h> // Told C what we use lib to use
// Single line comment
/*

*/

// Print Hello World to the Screen
int main(void){
    #define CONSTANT_VALYE 12 // new constant
    printf("Hello World!\n");
    int garbage_variable; // this value will have whatever value that was in the address in RAM
    printf("%d\n", garbage_variable); // %d to use garbage variable in printing
    int array_example[10]; // this creates an array with a max of 10 elements
    array_example[0] = 10;
    printf("%d\n",array_example[0]);
    char string_name_example[] = "BOB" ; // so a string is treated like an array, you can assign it any number of elements, you can also leave it blank and the last value is a \O
    printf("%s\n",string_name_example); // notice %s
    printf("%c\n",string_name_example[3]); // notice %c
    return 0;
}

// once you are done, type gcc -o hello helloworld.c 
// then, to run the code, run out output