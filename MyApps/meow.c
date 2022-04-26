#include <stdio.h>

// This line declares the meow function initialized below
void meow(int n); 


// This calls the meow function created below
int main(void)
{
    meow(3);
}


// This is the meow funtion
void meow(int n)
{
    for (int i = 0; i < n; i++)
    printf("meow\n");
}
 

