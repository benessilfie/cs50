#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    // int list[3]; // this statically allocates an array of size 3
    int *list = malloc(3 * sizeof(int)); //this dynamically allocates an array of size 3
    if (list == NULL)
    {
        return 1;
    }

    // Assign three numbers to that array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Time passes

    //Here you can 1. Allocate new array of size 4

    // int *tmp = malloc(4 * sizeof(int));
    // if (tmp == NULL)
    // {
    //     free(list);
    //     return 1;
    // }

    // copy numbers from old array into new array // NB:(You only need this is you go with option 1 above)
    // for (int i = 0; i < 3; i++)
    // {
    //     tmp[i] = list[i];
    // }

    // Add fourth number to new array
    // tmp[3] = 4;

    // Free old array
    // free(list);

    // Remember new array
    // list = tmp;

    // Print new array
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%i\n", list[i]);
    // } 

    // free new array
    // free(list);

    // OR

    // 2. Resize the old array to be of size 4
    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    // Add fourth number to new array
    tmp[3] = 4;  

    // Remember new array
    list = tmp;

    // Print new array
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    } 

    // free new array
    free(list);

    return 0;
}