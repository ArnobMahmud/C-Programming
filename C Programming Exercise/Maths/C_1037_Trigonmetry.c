#include <stdio.h>
#include <math.h>
//#define PI 3.142

int main(int argc, char const *argv[])
{  
    double x;  // represents angle in radian
    char T;     // types of trigonmetric function
    double value;   

    printf("Enter a type : ");
    scanf("%c", &T);

    printf("Enter angle in radian : ");
    scanf("%lf", &x);

    switch (T)
    {
    case 's':
        value = sin(x);
        printf("The Sine of %.3lf is %lf", x, value);
        break;
    
    case 'c':
        value = cos(x);
        printf("The Cosine of %.3lf is %lf", x, value);
        break;
    
    default:
        value = tan(x);
        printf("The Tangent of %.3lf is %lf", x, value);
        break;
    }
    
    return 0;
}
