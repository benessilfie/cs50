#include <cs50.h>
#include <stdio.h>

int main(void) {
    int start_size;
    do {
        start_size = get_int("Start size: ");
    } while (start_size < 9);

    int end_size;
    do {
        end_size = get_int("End size: ");
    } while (end_size < start_size);

    int years = 0;

    while (start_size < end_size) {
        int lamas_gained = start_size / 3;
        int lamas_lost = start_size / 4;

        start_size = start_size + lamas_gained - lamas_lost;
        years++;
    }

    printf("Years: %i\n", years);
}
