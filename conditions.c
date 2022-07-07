#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, x = 1;
    if (a == x) {
        printf("a = %d is equal to x = %d\n", a, x);
    }

    if (c > b) {
        printf("c = %d is greater than b = %d\n", c, b);
    } // could just add a else statement.
    /*else {
        printf("c = %d is less than b = %d\n", c, b);
    }*/

    if (b < c) {
        printf("b = %d is less than c = %d\n", c, b);
    }

    return 0;
}