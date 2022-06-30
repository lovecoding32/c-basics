#include <stdio.h>

int main() {
    //Syntax: type name[size1][size2]...[sizeN];
    int arr[1][2][3]; //multidimensional array
    for(int i = 0; i <= 0; i++) {
        for(int j = 0; j <= 1; j++) {
            for(int k = 0; k <= 2; k++) {
                arr[i][j][k] = i + j + k;
                printf("arr[%d][%d][%d]: %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }

    int a[3][4] = {  
        {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
        {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
        {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
    }; //2D array: https://www.tutorialspoint.com/cprogramming/images/two_dimensional_arrays.jpg
    printf("val a[2][3]: %d\n", a[2][3]);

    return 0;
}