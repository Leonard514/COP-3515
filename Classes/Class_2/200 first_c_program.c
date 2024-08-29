/* My first C Program 
* This is a comment, provides documentation to help
* you remember what you did and helps others know what
* you're trying to do. Multi-line comments!
*/

// This is a single-line comment

/* PUT IN DIRECTIVES HERE - they begin with # character, one line
* long, no semicolon! These are executed before processing of the program*/


/* Include: preprocessor directive - include text from another file
* first! (stdio.h - for input/output) */
#include <stdio.h>

/* Used to control memory! */
#include <stdlib.h>

/* You need this for boolean types! */
#include <stdbool.h>

/* You need this for strings lol */
#include <string.h>
#include <time.h>


/* Code to run is part of main function, in {}.
* int means it must return an integer. Main routine
* is always the first function to be executed! C programs
* MUST have a main function!*/

int main(void)
{
    /* C statements (commands) end in semicolons!*/

    /* printf doesn't automatically move output to the
    next line!!!*/
    printf("Hello world!\n");

    printf("Here are some escape characters:\n");

    /* You must escape double quotes since they are used
    * to mark ends of the string. Backslashes must also be
    * escaped */

    printf("\', \", \?, \\, \a, \f, \r, \t, \v\n");

    /* return 0 - program ran correctly!*/
    return(0);
}