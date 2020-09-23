 /*
     Author : Arnob Mahmud

     Mail : arnob.tech.me @ gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
  
  int a, b, c; 
  float m;
  char ch;
  double x;
  
  
    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("The value of a is: %d\n", a);

    printf("Enter the value of b:\n");
    scanf("%d", &b);
    printf("The value of b is: %d\n", b);

    printf("Enter the value of c:\n");
    scanf("%d", &c);
    printf("The value of c is: %d\n", c);
     
    printf("Enter the value of m:\n");
    scanf("%f", &m);
    printf("The value of c is: %f\n", m);
     
    printf("Enter a string :\n");
    scanf("%c", &ch);
    printf("Your string is :\n", ch);
      
    printf("Enter the value of x:\n");
    scanf("%lf", &x);
    printf("The value of x is: %f\n", x);
     
    
  return 0;

}
