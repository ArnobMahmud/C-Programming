/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

    int i, n, sum = 0;

    printf("Enter the value of n :\n");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++) {

        sum = sum + pow (i , 2);

    }

    printf("The value of sum is :%d", sum);

  return 0;

}
