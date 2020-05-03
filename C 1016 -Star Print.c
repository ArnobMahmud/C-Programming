/* 
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	
	int i, j;

        for (i=1; i<=10 ; i++) {

            for(j = i; j <= 10; j++) {

            printf("*");                       

        }

        printf("\n");                 
    }

    getch();

    return 0;

}
