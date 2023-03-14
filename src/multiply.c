/*******************************************************************************
*
* Purpose: Multiplies ints from standard input by the int provided by the 
* 2nd argument.  So if this is called with ./multiply 5 then all ints read in 
* from standard input will be multipled by 5 and output.
*
* Author: Kevin Browne
*
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "library.h"
#include "library.c"

int main(int argc, char *argv[]) //argc -> number of command line arguments passed to the program  ;  argv -> array of strings containing the actual arguments
{
  int m = 0;

  // if argument number is incorrect output this notice
  if (argc != 2) 
  {
    printf("Incorrect number of arguments provided.\n");
    return 0;
  }

  // read in ints one at a time and multiply by the 2nd argv value
  while (scanf("%d", &m) != EOF)//EOF -> End of file (so it loops till its at the end of the file);   m is the integer inputted by user
  {
    printf("%d\n", multiply(m, atoi(argv[1])));   //atoi converts the second argument which is a str into an integer;  then multiply multiplies m and the 2nd arg
  }

  return 0;
}
