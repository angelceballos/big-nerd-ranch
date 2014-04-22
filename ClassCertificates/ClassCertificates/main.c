//
//  main.c
//  ClassCertificates
//
//  Created by Angel Ceballos on 2/23/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//
//  Chapter 5

#include <stdio.h>
#include <unistd.h> // sleep function that does nothing but wait a number of seconds

// Each parameter has two parts: the type (i.e char, int, double, float etc.) and
// Name of parameter (i.e *student, *course, *numDays)
void congratulateStudent (char *student, char *course, int numDays)
// use vold to create a function when you don't have anything to return. Vold cancels all return.

{
    // example of how we include multiple variables into a one string
    printf("%s has done as much %s Programming as I could fit into %d days.\n", student, course, numDays);
    
}

int main(int argc, const char * argv[])
{
    // All values inside a function are called arguments
    congratulateStudent("Kate", "Cocoa", 5); // first value is student, course, and number of days. Fills in.
    sleep(2);
    congratulateStudent("Bo", "Objective-C", 2);
    sleep(2); // this call will have a 2 second pause between each message
    congratulateStudent("Mike", "Python", 5);
    sleep(2);
    congratulateStudent("Liz", "iOS", 5);
    // all values are in the exact same order as called in their parameters and type.
    // Liz is char, char means character. 5 is int. Int means integer.
    
    return 0;
}

