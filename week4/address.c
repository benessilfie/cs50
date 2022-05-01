// #include <cs50.h>
#include <stdio.h>

int main(void)
{
    // int n = 50;
    // int *p = &n;
    // printf("%p\n", p);
    // printf("%i\n", n);
    // printf("%i\n", *p); // Deferencing

    // string s = "Hi!";
    // char *p = &s[0];
    // printf("%p\n", p);
    // printf("%p\n", s);

    char *t = "Hi!";
    printf("%p\n", t);
    printf("%c\n", *t /* this is the first character of the word "Hi!" */);
    printf("%p\n", &t[1]);
    printf("%p\n", &t[2]);
    printf("%p\n", &t[3]);

    printf("\n");

    // More Pointers
    // char *s = "Hi!";
    // printf("%c\n", s[0]);
    // printf("%c\n", s[1]);
    // printf("%c\n", s[2]);
    // printf("%c\n", s[3]);

    // Deferencing a pointer means to go into the pointer 
    // address and get the data stored there. 
    // (we use '*(pointer identifier)' to derefence a pointer)
    // e.g Below

    char *s = "Hi!";
    printf("%c\n", *s);
    printf("%c\n", *(s + 1)); // Pointer Arithmetic
    printf("%c\n", *(s + 2));

    printf("\n");
    // printf("\n");

    // MORE POINTER ARITHMETIC
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};
    printf("%i\n", *numbers); // NOTE: format editor of the data type + '*' dereferences a pointer
    printf("%p\n", &numbers); // NOTE: format editor 'p' + '&' prints pointer address
    printf("%i\n", *(numbers + 1));
    printf("%i\n", *(numbers + 2));
    printf("%i\n", *(numbers + 3));
    printf("%i\n", *(numbers + 4));
    printf("%i\n", *(numbers + 5));
    printf("%i\n", *(numbers + 6));



    // char *s = "Hi!";
    // printf("%s\n", s);
}