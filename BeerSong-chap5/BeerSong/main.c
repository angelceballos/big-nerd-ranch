//
//  main.c
//  BeerSong
//
//  Created by Angel Ceballos on 2/25/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//

#include <stdio.h>

// Breakpoints in xcode helps save a location where you want the debugger to pause the execution of your program to test.

void signSongFor (int numberOfBottles)
{
    if (numberOfBottles == 0) // Once 4 bottles hits the number 0 it will print this. If not, it will do else
    {
        printf("There are simply no more bottles of beer on the wall.\n\n");
    } else {
        printf("%d bottles of beer on the wall. %d bottles of beer.\n", numberOfBottles, numberOfBottles);
        int oneFewer = numberOfBottles - 1;
        printf("Take one down, pass it around, %d bottles of beer on the wall.\n\n", oneFewer);
        signSongFor(oneFewer); // This function calls itself;
        
        // Print a message just before the function ends
        printf("Put a bottle in the recycling, %d empty bottles in the bin.\n", numberOfBottles);
    }
}

int main(int argc, const char * argv[])
{
    // We could sing 99 verses, but 4 is easier to think about
    signSongFor(4); // 4 is the number of bottles. Once we have a number it goes to the next function stack above
    
    return 0; // exit this function stack and go to signSongFor function definition and execute scope.
}

