/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h> 

int main(int argc, char const *argv[])
{
	
	float r, area;

    printf("Enter the value of radius:\n");
    scanf("%f", &r);

    area = 3.142 * pow( r, 2);  

    printf("The area of the circle is : %.3f", area);

	return 0;
}


