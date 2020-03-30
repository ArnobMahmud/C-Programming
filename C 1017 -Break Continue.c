/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com

*/

#include <stdio.h>
#include <conio.h>

int main () {

    int i;

    printf (" Only odd number will be printed [For Loop] :\n");

    for (i = 1; i <= 50; i++) {

        if ( i % 2 == 0) {
        continue;
        }

        printf (" %d\n", i);

    }

    printf ("Value [For Loop] :\n");
    
    for (i = 1; i <= 50; i++) {

        if ( i % 3 == 0 ) {
        continue;
        }

        printf (" %d\n", i);

    }

    printf ("Product [For Loop]:\n");

    for (i = 1; i <= 50; i++) {

        if ( i % 10 == 0 ) {
        break;  
        }

        printf (" %d\n", i);

    }

  return 0;

}
