#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x; // create pointer x
    int *y; // create pointer y

    x = malloc(sizeof(int)); // allocate memory to variable x to store values

    *x = 42; // derefrence pointer x and asign a value of 42
    // *y = 13; // derefrence pointer y (or Go into address y) and asign a value of 42, NB: this will cause a
            // segmentaion fault because we haven't allocated memory in the computer to store the value of y
            // there is no known address of y to go to.

    y = x; // assign the memory of x to y
    
    *y = 13; // derefrence pointer y and asign a value of 13 nb: Because x and y share the same memory, 
            // assigning the value of 13 to y, will update the value of x from 42 to 13.

    printf("%i\n", *x);   // this will print 13
    printf("%p\n", x);   // this will print the pointer address of x
    printf("%i\n", *y); // this will print 13
    printf("%p\n", y); // this will print the pointer address of y which is also the same as x
}