#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int scores[3]; 
   for (int i = 0; i < 3; i++)
   {
       printf("%i\n", scores[i]);
   }

   //NOTE: When you don't initialise your variables to have values, 
   // the computer assigns reminants of past int's, char's and so on to the variable.
   // These are known as garbage values. 
}