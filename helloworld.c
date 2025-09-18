#include <stdio.h> // Told C what we use lib to use
#define MAX_LEN 10 // here, we are doing a max length for user input, make sure to leave room for the /0
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
    // demonstration of user input
    char buffer[MAX_LEN]; // buffer is the name we name a user input
    int some_number = 0;
    printf("Type numbers, this is a user input example with scannff, MAX 9 DIGITS PLZ: \n");
    fgets(buffer,MAX_LEN,stdin); // get user input
    sscanf(buffer,"%d", &some_number); //convert to int
    printf("This is what you typed: %d", some_number);


    return 0;
}

// once you are done, type gcc -o hello helloworld.c 
// then, to run the code, run out output