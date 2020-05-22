/*
   Author : Arnob Mahmud

   Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>
#include <conio.h>

float add_sum(float x, float y) {

	  int add_result = x + y;
          return add_result;
}

float subtract_sum(float x, float y) {

  	float subtract_result = x - y;
        return subtract_result;
}

float multiply_sum(float x, float y) {

	  float multiply_result = x * y;
          return multiply_result;
}

float divide_sum(float x, float y) {

	  float divide_result = x / y;
          return divide_result;
}

int main(int argc, char const *argv[]) {

	float x, y;

	printf("Enter two numbers:\n");
	scanf("%f %f", &x, &y);

    float add_result = add_sum(x, y);
    printf("Add result is : %.3f\n", add_result);

    float subtract_result =subtract_sum(x, y);
    printf("Subtraction result is :%.3f\n", subtract_result);

    float multiply_result = multiply_sum(x, y);
    printf("Multiply result is :%.3f\n", multiply_result);

    float divide_result = divide_sum(x, y);
    printf("Divide result is :%2.4f\n", divide_result);
    
    getch();
    return 0;

}
