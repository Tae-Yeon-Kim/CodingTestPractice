#include <stdio.h>

#define	CRLF()	printf( "\n" )

#define TRUE 	1
#define	FALSE	0

void main( void )
{
	unsigned int N = 32 ;
	unsigned int A = 0 ;
	int i ;
	
	for ( i = 1 ; i < N + 1 ; i++ )
	{
		
		A = A | ( TRUE << ( i - 1 ) ) ;
		printf( "%2d %08X", i, A ) ; CRLF() ;
	}
	
}
