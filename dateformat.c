
#include <stdio.h>

int main() {
    char date[20];
    int dd, mm, yyyy;

    scanf("%19s", date);

    sscanf(date, "%d/%d/%d", &dd, &mm, &yyyy);

    if (mm == 4) {
        printf("%02d-Apr-%04d", dd, yyyy);
    } else {
        printf("Month is not 04");
    }

    return 0;
}
