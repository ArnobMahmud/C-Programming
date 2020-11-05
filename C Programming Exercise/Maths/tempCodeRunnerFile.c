#include <stdio.h>
#include <math.h>
#define PI 3.142

double convert(double radian){
     return(radian * ( 180 / PI));
}

int main(int argc, char const *argv[])
{  
    double x, value;  // represents angle in radian
    char T;     // types of trigonmetric function
    int n;   

    printf("Enter a type : ");
    scanf("%c", &T);

    printf("Enter angle in radian : ");
    scanf("%lf", &x);

    printf("Enter axis rotation : ");
    scanf("%d", &n);

    double degree = convert(x);

    switch (T)
    {
    case 's':
        
        value = sin(x * n * PI);
        printf("The Sine of %.3lf is %lf", x, value);
        break;
    
    case 'c':
        value = cos(x * n * PI);
        printf("The Cosine of %.3lf is %lf", x, value);
        break;
    
    default:
    if ( x = (2 * n + 1) * PI / 2)
    {
        printf("Math error");
    }
    else
    {
        value = tan(x * PI);
        printf("The Tangent of %.3lf is %lf", x, value);
    }
        break;
    }
    
    return 0;
}
