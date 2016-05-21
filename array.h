#define MAXROW 10 /*max number of strings*/
#define MAXCOL 10 /* each string no longer than MAXCOL-1 in length*/


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
void read_array( char A [MAXROW][MAXCOL], int* nptr);

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
void get_vector( char A[MAXROW][MAXCOL], char* v[MAXROW], int n );


/*Overview: Prints strings in v, each on a new line. 
 *
 *Pre: The vector v is a MAXROW array of char pointers,
 *no_str is an int specifying the number of strings pointed to by v.
 *
 *Post: The strings pointed to by the no_str first rows of v 
 *have been written out to stdout.
 */
void write_vector( char* v[MAXROW], int n );

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
void transpose_array( char A[MAXROW][MAXCOL], int n, int* m );

/*Overview: Strings in array A are printed out, each on a new line. 
 *
 *Pre: A is a MAXROW by MAXCOL array of char, no_str is
 *an int specifying the number of strings in the rows of A.
 *
 *Post: The strings in the no_str first rows of A have been 
 *written out to stdout.
*/
void write_array( char A[MAXROW][MAXCOL], int n );
