/*
  Author : Arnob Mahmud

  Mail : arnob.tech.me @ gmail.com
*/

#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{
    
    int i, sum = 0;

    i = 0;
    while ( i <= 100) {


        i = i+2;         

        sum = sum + i;

    }

    printf("Sum of even numbers: %d\n", sum);


    i = 0;
    while ( i <= 100) {


        i = i+1;         

        sum = sum + i;

    }

    printf("Sum of even numbers: %d\n", sum);

    return 0;
    
}