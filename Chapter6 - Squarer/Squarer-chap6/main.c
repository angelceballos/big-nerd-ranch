//
//  main.c
//  Squarer-chap6
//
//  Created by Angel Ceballos on 2/26/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//
//  Challenge for Chapter 6

#include <stdio.h>

int square(int numberSquared){ // get the number first
    int result = numberSquared * numberSquared; // square the number
    return result; // return the result
}

int main(int argc, const char * argv[])
{
    int originalNumber = 5; // number we want to square
    int answer = square(originalNumber); // what is the answer to the number square
    
    printf("\"%d\" squared is \"%d\"\n", originalNumber, answer); // show the result in console log
    return 0; // no error. exit program. EXIT_SUCCESS also works here
}

// The challenge wanted us to show the out put "5" squared is "25" using character escapes (i.e \ ) as well

