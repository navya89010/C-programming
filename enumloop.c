#include <stdio.h>

enum Colors {
    RED, GREEN, BLUE, YELLOW, BLACK
};

int main() {
    char *names[] = {
        "RED", "GREEN", "BLUE", "YELLOW", "BLACK"
    };

    enum Colors c;

    for (c = RED; c <= BLACK; c++) {
        printf("%s = %d\n", names[c], c);
    }

    return 0;
}