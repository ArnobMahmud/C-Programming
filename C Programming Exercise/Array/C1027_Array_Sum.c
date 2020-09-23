/*
  Author : Arnob Mahmud

  Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{

    int a[10], i, sum = 0;

    printf("Enter the value of the array: \n");

    for (i = 0; i < 10; i++) {
        
        scanf("%d", &a[i]);
    }

    for ( i = 0; i < 10; i++) {

        sum = sum + a[i];
    }

    printf("The sum of the Array is: %d \n", sum);

    return 0;
}