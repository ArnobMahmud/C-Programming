/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me @ gmail.com
*/

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    
    int CGPA;

    printf("Enter your CGPA:");
    scanf("%d", &CGPA);

    switch (CGPA) {

    case 0 :
    printf("Fail");
    break;

    case 1:
    printf("Poor");
    break;

    case 2:
    printf("Average");
    break;

    case 3:
    printf("Good");
    break;

    case 4:
    printf("Excellent");
    break;

    default :
    printf("Illegal CGPA");
    break;

    }
    
    return 0;
}