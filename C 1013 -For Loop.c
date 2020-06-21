/*
     Author : Arnob Mahmud

     Mail : arnob.tech.me @ gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	
	int i, n, sum = 0;
        
        printf("Enter ending value : ");
        scanf("%d", &n);

        for ( i =7; i <= n; i++ ) {

        if ( i % 2 == 0) {               

            sum = sum + i;

            printf(" %d\n", i);

            }

        }

        printf( "The value of sum is: %d\n", sum);
  
	return 0;

}
