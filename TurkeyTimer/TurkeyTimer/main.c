//
//  main.c
//  TurkeyTimer
//
//  Created by Angel Ceballos on 2/25/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//

#include <stdio.h>

void showCookTimeForTurkey(int pounds)
{
    int necessaryMinutes =  15 + 15 * pounds;
    printf("Cook for %d minutes.\n", necessaryMinutes);
    if (necessaryMinutes > 120)
    {  // everything within the curly braces is a scope with local variables. Halfway is defined within this scope. It can inherit variables in the parent scope of ShowCookTimeForTurkey function definition.
        
        // if the time is greater than 120 minutes
        int halfway = necessaryMinutes / 2; // divide time by 2, giving the half way mark.
        printf("Rotate after %d of the %d minutes.\n", halfway, necessaryMinutes); // then tell the user to rotate at the halfway marker time
    }
}

int main(int argc, const char * argv[]) // main function is always executed first and than it called for the showCookTimeForturkey function above
{
    int totalWeight = 10; // total weight of turkey
    int gibletsWeight = 1;
    int turkeyWeight = totalWeight - gibletsWeight; // turkey weight is now 9 when gibletsWeight are substracted
    showCookTimeForTurkey(turkeyWeight); // total weight is now 9. Start showCookTimeForTurkey function above.
    
    return 0; // return nothing, exit function and continue stack
}

