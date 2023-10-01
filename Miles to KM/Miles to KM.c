// Programmer:      Thecanniestbadge
// Date:            06/20/2023
// Program Name:    Miles to Kilometers
// Chapter:         Repetition 
// Description:     This program receives the number of miles from the user and converts it to kilometers.
//                  It uses both a pre-test and a post-test sentinel-controlled loop for input and conversion.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
    // Constant and Variable Declarations
    const double SENTINEL_VALUE = 0.0;  // Sentinel value for ending the loops
    const double CONVERSION_FACTOR = 1.6;  // Conversion factor from miles to kilometers
    double miles; // A variable to hold the user's input
    double kilometers;  // Variables to hold the user's input and conversion result

    //  Your program goes here 

    //  Using a pre-test (while) loop 
    printf("*** Using a pre-test (while) loop ***************************\n");
    printf("***  This requires the initial prompt and get before the loop,\n");
    printf("***  the processing (and output) at the top of the loop,\n");
    printf("***  and a re-prompt (and re-get) at the bottom of the loop\n");
    printf("***  (but it doesn't require a decision inside the loop).\n");
    printf("*************************************************************\n");

    printf("\n"); // Blank line
    
    printf("Enter the number of miles (enter a negative number to quit): ");
    scanf("%lf", &miles);
    
    // Using while
    while (miles >= SENTINEL_VALUE) {
        kilometers = miles * CONVERSION_FACTOR;
        printf("%.1f mile%s is %.1f kilometer%s.\n", miles, miles == 1 ? "" : "s", kilometers, (kilometers == 1.0) ? "" : "s");
        printf("Enter the number of miles (enter a negative number to quit): ");
        scanf("%lf", &miles);
    }

    //  Using a post-test (do...while) loop 
    printf("\n*** Using a post-test (do...while) loop ***************\n");
    printf("***  This requires the prompt and get at the top of the loop, \n");
    printf("***  and then a decision to see if the process (and output)\n");
    printf("***  should be done\n");
    printf("***  (but the prompt (and get) is only written once).\n");
    printf("*********************************************************\n");
    
    // Using do-while
    do {
        printf("Enter the number of miles (enter a negative number to quit): ");
        scanf("%lf", &miles);
        if (miles >= SENTINEL_VALUE) {
            kilometers = miles * CONVERSION_FACTOR;
            printf("%.1f mile%s is %.1f kilometer%s.\n", miles, miles == 1 ? "" : "s", kilometers, (kilometers == 1.0) ? "" : "s");
        }
    } while (miles >= SENTINEL_VALUE);
    
    printf("\n"); // Blank line
    
    return 0;
} // end main()