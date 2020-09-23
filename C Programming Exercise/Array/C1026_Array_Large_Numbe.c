/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

  int a[5] = { 3, -6, 19, -43, 23};
  int max = a[0], i;                       
  
   /* a[0] = -3
      a[1] = 6
      a[2] = 19
      a[3] = -43
      a[4] = 23  */

     for ( i = 1; i < 5; i++) {

         if ( a[i] > max) {
             max = a[i];
         }

     }

    printf("The large number is :%d", max);

  return 0;

}