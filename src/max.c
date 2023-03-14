/*******************************************************************************
*
* Purpose: Prints the maximum number of any number of int command-line 
* arguments that are provided.  So if this program is run with:
*   ./max 5 10 20 25 15
* then we can expect it to print 25.
*
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "library.h"
#include "library.c"

int main(int argc, char *argv[]){
  int myArray[argc - 1];
  for (int i = 1; i < argc; i++) {
    myArray[i-1] = atoi(argv[i]);  // As argv[1] is the first argment you strt loop at 1
  }
    printf("%d\n" , max(myArray, argc - 1));

  return 0;
}
