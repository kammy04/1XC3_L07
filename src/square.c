/*******************************************************************************
*
* Purpose: Square area calculator.  Outputs caculated square areas from 
* side length provided via standard input... outputs them with a unit 
* provided as 2nd argv values.  i.e. if we run with ""./square inches" expect 
* output of the format: 50 inches
*
*******************************************************************************/
#include <stdio.h>
#include "library.h"
#include "library.c"

int main(int argc, char *argv[])// argc -> count,  argv-> parameter
{
 int m = 0;

  // if argument number is incorrect output this notice
  if (argc != 2)
  {
    printf("Incorrect number of arguments provided.\n");
    return 0;
  }

  // read in ints one at a time and multiply by the 2nd argv value
  while (scanf("%d", &m) != EOF)//EOF -> End of file
  {
    printf("%d %s\n", square_area(m), argv[1]);
  }

  return 0;
}
