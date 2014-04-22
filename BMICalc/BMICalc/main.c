//
//  main.c
//  BMICalc
//
//  Created by Angel Ceballos on 3/2/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//
//  Chapter 11, example 1

#include <stdio.h>

// You use structs when you need a variable to hold several related chunks of data.
// Similar to an array

// Here is the declaration of struct
struct person {
    float heightInMeters;
    int weightInMeters;
    int age;
};

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Declaration of the newPerson type
typedef struct { // typedef creates an alias. Same as above
    int favoriteNumber;
} newPerson; // this is the struct varable name. This definition is the same as above

int main(int argc, const char * argv[])
{
    struct person mikey; // inheriting perperties in struct
    mikey.heightInMeters = 1.7;
    mikey.weightInMeters = 96;
    mikey.age = 24;
    
    struct person aaron; // another great example of structures (structs)
    aaron.heightInMeters = 1.97;
    aaron.weightInMeters = 84;
    aaron.age = 26;
    
    newPerson angel; // this is the shorthand for using a struct variable
    angel.favoriteNumber = 2;
    
    printf("Mikey is %.2f meters tall\n", mikey.heightInMeters); // structs in use
    printf("Mikey weighs %d kilograms\n", mikey.weightInMeters);
    printf("Mikey age is %d \n\n", mikey.age);
    
    printf("Aaron is %.2f meters tall\n", aaron.heightInMeters);
    printf("Aaron weighs %d kilogram\n", aaron.weightInMeters);
    printf("Aaron age is %d \n\n", aaron.age);
    
    printf("My favorite number %d", angel.favoriteNumber); // using new struct type definition
    
    return 0;
}

