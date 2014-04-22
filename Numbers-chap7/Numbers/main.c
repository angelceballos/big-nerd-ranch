//
//  main.c
//  Numbers
//
//  Created by Angel Ceballos on 2/26/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//
//  Chapter 7 - Numbers

#include <stdio.h>
#include <stdlib.h>
#include <math.h> // if you will be doing a lot of math, you will need the math library. Type 'man math' into terminal to see what this library is made of. Great stuff!

// An Unsigned Variable Type of int can hold zero and positive numbers but a signed int holds negative, zero or positive numbers. Unsigned can only handle 0 to 225, signed can handle negatives, positives, and large numbers

int main(int argc, const char * argv[])
{
    // Regular 8 or 16 base integers
    
    int x = 225;
    printf("x is %d.\n", x); //%d stands for decimal. It prints any number as a decimal. i.e 255.0
    printf("In octal, x is %o.\n", x); // integer base-8 (octal). x is 341
    printf("In hexadecimal, x is %x.\n", x); // integer base-16 (hexadecimal). x is el
    
    // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    // Integers with a lot of bits
    
    long hugeNumber = 225; // use for an integer has a lot of bits
    printf("x is %ld.\n", hugeNumber); //%d stands for decimal.
    printf("In octal, x is %lo.\n", hugeNumber); // integer base-8 (octal).
    printf("In hexadecimal, x is %lx.\n", hugeNumber); // integer base-16 (hexadecimal).
    
    // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    // Unsigned integers
    
    unsigned long y = 255; // if you are printing an unsigned decimal number, you should use %u
    printf("y is %lu.\n", y);
    
    // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    // Integers operations
    
    printf("3 * 3 + 5 * 2 = %d\n", 3 * 3 + 5 * 2); // multiplication first, than addition and subtraction.
    printf("11 / 3 = %d\n", 11 / 3); // integer division. The answer should be 3.666667, but its not. The system sounds to the nearest 0. So the answer is 3.
    
    printf("11 / 3 = %d remainder of %d. \n", 11 / 3, 11 % 3); // the percent adds the remainder of 2
    // The % is like the \, but it returns the remainder of the answer instead of just the quotient 3.
    
    printf("11 / 3.0 = %f\n", 11 / (float)3); // cast operater is in () want to convert an equation to its entireity. It should now show 3.66666667 vs 3.
    
    
    // abs function is used instead of operator to get absolute value of int.
    // If you want the absolute value pf long, use labs(-5). These functions are declared in stdlib.h
    printf("The absolute value of -5 is %d\n", abs(-5)); // absolute value
    
    // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    // Operatior shorthand
    
    int a = 5;
    a = a + 1; // x is now 6
    
    int b = 5;
    b++; // b is now 6. ++ means increase by 1
    
    int c = 5;
    c--; // c is now 4. -- means decrease by 1
    
    int d = 5;
    d += 5; // d is now 10. The += is the same as saying d = d + 5, but in short hand. There is also -=, *=, /=, 5=
    
    // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    // Floating-point numbers
    
    float g = 1; // 32 bits
    double h = 1; // 64 bits
    long double i = 1; // 128 bits
    
    printf("This is a 32 %f, this is a 64 bits %f, this is 128 bits %Lf.\n", g, h, i);
    
    // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    // Tokens for displaying floating-point numbers
    
    double q = 12345.6789;
    printf("q is %f\n", q); // %f uses normal decimal notation
    printf("q is %e\n", q); // %e uses scientific notation
    
    // %f, %d etc. are called tokens
    
    return 0;
}

