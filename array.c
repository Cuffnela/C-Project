#include <stdio.h>
#include "array.h"

int main(int argc, char const *argv[])
{	int no_str;
	char A[MAXROW][MAXCOL];
	int new_no_str;
	char* v[MAXROW];
	
	read_array(A, &no_str);
	get_vector( A, v, no_str );	
	write_vector( v, no_str );
	transpose_array( A, no_str, &new_no_str );
	write_array( A, new_no_str );
	
	return 0;
}
