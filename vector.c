#include "array.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Overview: A memory location is assigned to each char pointer.
 *Each string in array A is copied into v.
 *
 *Pre: A is a MAXROW by MAXCOL array of char, v is a MAXROW 
 *vector array of char pointers, no_str is an int specifying 
 *the number of strings in the rows of A.
 *
 *Post: The vector v contains pointers to copies of the strings 
 *in the no_str first rows of A. The copies have been dynamically 
 *allocated.
 */

void get_vector( char A[MAXROW][MAXCOL], char* v[MAXROW], int n )
{
	int row=0;
	
	while(row< n)
	{
		v[row]= calloc(strlen(A[row])+1, sizeof(char));
		strcpy(v[row], A[row]);
		row++;
	}/*end while*/
	 
}