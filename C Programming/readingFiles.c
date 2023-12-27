#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> // for strcpy() function

int main()
{
    char line[255];
    FILE * fpointer = fopen("employees.txt", "r");

    // read the file 1 line at a time by fgets() function
    fgets(line, 255, fpointer); // read 1st line of the file and store it in the "line" array variable
    /*
    1st parameter: store the info of 1st line in the "line" variable
    2nd parameter: give a max size to read in
    3rd parameter: file pointer
    */
    fgets(line, 255, fpointer); // this will now store the 2nd line in the file
    printf("%s", line);

    fclose(fpointer);
    return 0;
}