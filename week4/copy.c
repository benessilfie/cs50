#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");
    
    char *t = malloc(strlen(s) + 1); // Dynamic memory allocation

    if (t == NULL) // In case there is no RAM available to be allocated to me
    {
        return 1;
    }

    // for (int i = 0, n = strlen(s) + 1; i < n; i++) 
    // {
    //     t[i] = s[i];
    // }

    strcpy(t, s); // This gives the same output as the commented for loop above

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
}