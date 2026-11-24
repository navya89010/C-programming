#include <stdio.h>

enum Months {
    JANUARY = 1, FEBRUARY, MARCH, APRIL,
    MAY, JUNE, JULY, AUGUST,
    SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    int days[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    for (int i = JANUARY; i <= DECEMBER; i++) {
        printf("%s = %d days\n", months[i-1], days[i-1]);
    }

    return 0;
}