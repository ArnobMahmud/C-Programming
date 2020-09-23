/*

  Author : Arnob Mahmud

  Mail : arnob.tech.me@gmail.com

*/

#include <stdio.h>
#include <conio.h>

int main( void) {

    int a[6], i, odd_sum = 0, even_sum = 0;

    printf("Enter the value of array A :\n");

    for (i= 0; i < 6; i++) {
        scanf("%d", &a[i]);

    }


    for (i= 0; i < 6; i++) {
        printf("%d", a[i]);

    if ( a[i] %2 == 0) {

        even_sum = even_sum + a[i];
    }

       else {

           odd_sum = odd_sum + a[i];
       }

    }

    printf("\nThe value of even sum is :%d", even_sum);
    printf("\nThe value of odd sum is :%d", odd_sum);

  return 0;

}
