#include <stdio.h>

int main() 
{ 
    int arr[10]; //declare an array of 10 integers
    
    for(int i = 0; i <= 9; i++) {
        arr[i] = i;
    }

    for(int j = 0; j <= 9; j++) {
        printf("arr[%d]: %d\n", j, arr[j]);
    }
        
    return 0;
}