/*
   Author : Arnob Mahmud

   Mail : arnob.tech.me @ gmail.com

*/

#include <stdio.h>
#include <conio.h>

    int main(int argc, char const *argv[])
    {
        
        float x, y, z;

        printf("Enter a value of x:");
        scanf("%f", &x);

        printf("Enter a value of y:");
        scanf("%f", &y);

        if (y != 0) {

            if ( x != 0) {


        z = x/y;

        printf("The sum is:%.4f", z);

            }
            else {

               printf("Cant calculate. You've entered x = 0");
            }

        }

        else {
           printf("Error :  Because  y = 0 \n ");   
        }

    return 0;

}