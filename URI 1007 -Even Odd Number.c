/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me @ gmail.com
*/

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
   
    int a;

    printf("Enter the value of a:");
    scanf("%d", &a);


    if (a % 2 == 0) {

     printf("You have entered an even number.");

    } else {

     printf("You have entered an odd number.");

    }

  return 0;

}