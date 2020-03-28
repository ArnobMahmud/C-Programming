/*
  Author : Arnob Mahmud

  Mail : arnob.tech.me @ gmail.com
*/

#include <stdio.h>
#include <conio.h>


int main(int argc, char const *argv[])
{
	int year;

    printf("Enter a year:");
    scanf("%d", &year);

    if (year % 4 == 0) {                          

        printf("This is a leap year.");
    } else {

        printf("This is not a leap year.");
    }

    getch();

	return 0;

}