/*
     Author : Arnob Mahmud

     Mail : arnob.tech.me @ gmail.com
 */

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	
	int i, sum = 0;

    for ( i =1; i<=100; i++ ) {

        if ( i % 2 == 0 && i % 5 == 0) {               

            sum = sum + i;

        }

    }

    printf( "The value of sum is:%d", sum);

	return 0;

}
