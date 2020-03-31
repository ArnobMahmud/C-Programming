/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <conio.h>

int main( void) {

    int a[5], b[5], ab[5];
    int i;


    /*
    Receive the data from user and both scan & print them on the output.
    later use a formula of adding two arrays.Print them on output.

        ab[5] = a[5] + b[5]
    */


    printf("Enter the value of array A: \n");

    for(i = 0; i < 5; i ++) {
        scanf(" %d", &a[i]);
    }

    printf("Enter the value of array B: \n");

    for(i = 0; i < 5; i ++) {
        scanf(" %d", &b[i]);
    }


    for(i = 0; i < 5; i ++) {
        ab[i] = a[i] + b[i];

    }

    printf("The value of array AB: \n", ab[i]);
    for(i = 0; i < 5; i ++) {
        printf(" %d\n", ab[i]);
        
    }

  return 0;

}