/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i, x, sum = 1;;

	printf("Enter the value :\n");
	scanf("%d", &x);

	for (i = 1; i <= x ; i++)
	{
		sum = sum * i;
	}

	printf("Factorial is : %d\n", sum);

	return 0;

}