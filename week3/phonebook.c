#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    string names[] = {"Carter", "David"};
    string numbers[] = {"+1-617-495-1000", "+1-617-495-1001"};

    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++) {
        if (strcmp(name, names[i]) == 0) {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
