#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> // for strcpy() function

int main()
{
    // modify, changing, creating, appending to files in C
    FILE * fpointer = fopen("employees.txt", "w"); // creating a pointer to a physical file on our machine
    // 2 parameters of fopen() --> file name, file mode
    // 3 basic type of file modes: r (for read), w (for creating new file or writing over an existing file), a (for appending information in a file)
    
    // write some info to this employees.txt file
    // list out all employees working in an office
    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting"); // write info to a file

    FILE * fpointer2 = fopen("employees.txt", "a");
    fprintf(fpointer2, "\nJessica, Business Analyst");

    fclose(fpointer); // to close the file
    fclose(fpointer2);
    return 0;
}