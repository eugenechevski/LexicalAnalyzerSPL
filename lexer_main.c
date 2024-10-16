#include <lexer.h>
#include <utilities.h>
/**
 * A driver program that simply calls provided functions
 * to start the process of lexing a file
 */

int main(int argc, char *argv[])
{
    // A dummy version of the code
    // A dummy version of the code

    if (argc < 2)
    {
        bail_with_error("Usage: %s [-p] <bof_file>", argv[0]);
    }

    // pass the file name to the lexer
    // from the command line
    lexer_init(argv[1]);
    lexer_output();

    return 0;
}