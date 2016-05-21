#include "array.h"
#include <stdio.h>

/*Overview: Strings in array A are printed out, each on a new line. 
 *
 *Pre: A is a MAXROW by MAXCOL array of char, no_str is
 *an int specifying the number of strings in the rows of A.
 *
 *Post: The strings in the no_str first rows of A have been 
 *written out to stdout.
*/

void write_array( char A[MAXROW][MAXCOL], int n )
{
	int row=0;
	
	while(row<n)
	{
		puts(A[row]);
		row++;
	}/*end while*/
}