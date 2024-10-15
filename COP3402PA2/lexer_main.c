#include <lexer.h>

/**
 * A driver program that simply calls provided functions
 * to start the process of lexing a file
 */

int main(int argc, char *argv[])
{
    // A dummy version of the code
    
    // pass the file name to the lexer
    // from the command line
    lexer_init(argv[1]);
    lexer_output();

    return 0;
}