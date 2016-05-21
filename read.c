#include "array.h"
#include <stdio.h>
#include <stdlib.h>

/*Overview: Builds array A from series of strings input by user. Produces 
 *an error message if user violates limits. 
 *
 *Pre: A is a MAXROW by MAXCOL array of char, no_str is an int.
 *
 *Post: There have been some strings read from the stdin and inserted 
 *into A row-wise, such that the second character of the first string 
 *is in A[0][1]. The int no_str contains the number of strings that 
 *have been inserted into A. There have not been more than MAXROW strings 
 *read, and each of them is not longer than MAXCOL-1. If there there 
 *has been an attempt made to read more than MAXROW strings, or a string 
 *that's longer than MAXCOL-1, a proper error message has been written on stderr.
 *void read_array( char A [MAXROW][MAXCOL], int* nptr)
 */

void read_array( char A[MAXROW][MAXCOL], int* nptr )
{ 
	char current=getchar();
	int row=0;
	int colm=0;
	
	while(current != EOF)
	{
		if(row< MAXROW)
		{
			 /*Fills first row or A up to new line character then add null char*/
			if(colm< MAXCOL)
			{
				if (current != '\n')
				{
					A[row][colm]=current;	
					colm++;	
				}/*end if*/
				else
				{
					A[row][colm]= '\0';
					row++;
					colm=0;
				}/*end else*/
			
			}/*end if*/
			 /*prints error message if MAXCOL exceeded*/
			else
			{
				fprintf(stderr, "One of the strings exceeds maximum allowed length.\n");
				exit(1);
			}/*end else*/
			
		}/*end if*/
		/*prints error message if MAXROW exceeded*/
		else
		{
			fprintf(stderr, "Number of strings exceed maximum number allowed");
			exit(1);
		}/*end else*/
		
		current=getchar();
		*nptr = row;
	}/*end while*/ 
		
}
