#include "array.h"
#include <stdio.h>

/*Overview: Prints strings in v, each on a new line. 
 *
 *Pre: The vector v is a MAXROW array of char pointers,
 *no_str is an int specifying the number of strings pointed to by v.
 *
 *Post: The strings pointed to by the no_str first rows of v 
 *have been written out to stdout.
 */

void write_vector( char* v[MAXROW], int n )
{
	int row=0;
	
	while(row<n)
	{
		puts(v[row]);
		row++;
	}/*end while*/
}