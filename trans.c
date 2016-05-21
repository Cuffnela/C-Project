#include "array.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Overview: Transposes array A. Prints an error message is matrix 
 *dimensions do not fit limits. 
 *
 *Pre: A is a MAXROW by MAXCOL array of char, old_no_str 
 *is an int specifying the number of strings in the rows 
 *of A, new_no_str is an int.
 *
 *Post: The array A has been transposed, new_no_str contains 
 *the number of strings in A. An error message is produced if 
 *the transposed data does not fit.
 */

void transpose_array( char A[MAXROW][MAXCOL], int n, int* m )
{
	char ch; /*character in given position of array*/
	int row;
	int colm;
	int max;
	
	int l=0; /*maximum string length*/
	int rowl=0; /*length or string in row*/
	
	/*finds maximum string length*/
	for(row=0; row<=MAXROW; row++)
	{
		rowl=strlen(A[row]);
		if(rowl>l)
		{
			l=rowl;
		}/*end if */
	}/*end for*/
	
	*m=l;
	
	/*prints error if a string is too long to compute the transpose*/
	if(l>MAXROW)
	{
		fprintf(stderr, "Maximum string length to large to compute transpose");
		exit(1);
	}/*end if */
	
	/*error message is there are too many rows to compute the transpose*/
	if(n>MAXCOL-1)
	{
		fprintf(stderr, "Maximum number of rows to large to compute transpose");
		exit(1);
	}/*end if */
	
	row=0; 
	
	/*Pads the Array with spaces*/
	while(row< MAXROW)
	{
		rowl=strlen(A[row]);
		for(colm=rowl; colm<l; colm++)
		{
			A[row][colm]= ' ';
		}/*end for*/
		
		/*puts null character in last column*/
		if(colm==l+1)
		{
			A[row][colm]='\0';
		}/*end if*/
		
		row++;
	}/*end while*/
		
	/*calculates maximum between number of strings and number of rows*/
	if(l<n)
	{
		max=n;
	}/*end if*/
	else
	{
		max=l;
	}/*end else*/
	
	/*transposes array and adds null character to end of each string*/
	for(row=0; row< max; row++)
	{
		for(colm=0; colm< row; colm++)
		{
			ch=A[row][colm];
			A[row][colm]=A[colm][row];
			A[colm][row]=ch;
		}/*end for*/

	}/*end for*/ 
	
	for(row=0; row<l; row++)
	{
		A[row][n]='\0';
	}/*end for*/
	
}