#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[200], copy[100];

    printf("Enter first string: ");
    fgets(str1,size of [str1],stdin);


    printf("Enter second string: ");
    fgets(str2,size of [str2], stdin);
    
    //Remove newline character
    str1[strcspn(str1, "\n")]= '\0';
    str2[strcspn(str2, "\n")]= '\0';

    return 0 ;

}

