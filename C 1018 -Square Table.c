/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int x, y, i;

	printf("Enter starting value:\n");
	scanf("%d", &x);

	printf("Enter terminal value:\n");
	scanf("%d", &y);
    
    printf("Value -  Square Value\n");

	for (i = x; i <= y; i++)
	{
		printf("%d \t\t%d\n", i, i *i);
	}
    
    getch();
	return 0;

}