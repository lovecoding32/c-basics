#include <stdio.h>
#include <stdlib.h>

/*
 * Different types:
    * - int: 32-bit signed integer
    * - long: 64-bit signed integer
    * - long long: 128-bit signed integer
    * - unsigned int: 32-bit unsigned integer
    * - unsigned long: 64-bit unsigned integer
    *   unsigned long long: 128-bit unsigned integer
    * - float: 32-bit floating point number
    * - double: 64-bit floating point number
    * - long double: 128-bit floating point number
    * - char: 8-bit signed integer
    * - unsigned char: 8-bit unsigned integer
    * - short: 16-bit signed integer
    * - unsigned short: 16-bit unsigned integer
    * - bool: 8-bit unsigned integer
    * - void: no type
*/

#define BOOL char
#define TRUE 1
#define FALSE 0

//C uses arrays of characters to define strings

int main() 
{ 
    //To define variables
    int a;
    int b = 1;

    int foo = 1, bar = 2;

    a = foo + bar + b;
    //Print output of variable: a
    printf("a = %d\n", a);
    return 0;
}