//
//  main.c
//  Addresses
//
//  Created by Angel Ceballos on 2/27/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 17;
    printf("i stores its value at %p\n", &i);
    // address of a variable is the location in memory where the value for that variable is stored

    // The result should of been i = 0x7fff5fbff89c. This is a memory address and they're always printed in hexadecimal format
    
    int a = 17;
    // Remember * means it will hold an a value (address, integer etc.) in type (int, char etc.) can be stored
    int *addressOfA = &a; // example storing the memory address into a variable.
    printf("a is stores its value at %p\n", addressOfA); // 0x7fff5fbff898
    printf("a is stores its value at %d\n", *addressOfA); // * prints the actual data stored there
    printf("this function starts at %p\n", main); // 0x100000eb0
    
    int b = 17;
    int *addressOfB = &b; // save member address in addressOfB.
    printf("B stores its value at %p\n", addressOfB); // print memory address
    *addressOfB = 89; // store in value at this memory address
    printf("Now b is %d\n", b); // print the new value in this memory address
    
    printf("An int is %zu bytes\n", sizeof(int)); // finding how much memory a data type is using. Returns 4 bytes. 4 bytes us 32-bit
    printf("A pointer is %zu bytes\n", sizeof(int *)); // 8 bytes. 8 bytes is 64-bits. My program is running 64-bit
    
    printf("An int is %zu bytes\n", sizeof(b)); // alternative to the above. Same thing, easier to pick up
    printf("A pointer is %zu bytes\n", sizeof(addressOfB));
    
    // Use NULL to return or do nothing. This can come handy in if statements and to store values into a data type
    
    return 0;
}

