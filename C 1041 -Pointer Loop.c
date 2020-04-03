/*
   Author : Arnob Mahmud

   Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x, y, z;

  printf("Enter a value of x :\n");
  scanf("%d",&x);

  printf("Enter a value of y :\n");
  scanf("%d",&y);

  printf("Enter a value of z :\n");
  scanf("%d",&z);

  int *p1, *p2, *p3;
  
  p1 = &x;
  p2 = &y;
  p3 = &z;

  if ( *p1 > *p2 && *p1 > *p2) {
    printf("The large number is : %d\n", *p1);
  }
  else if (*p2 > *p1 && *p2 > *p3) {
    printf("The large number is : %d\n", *p2);
  }
  else {
    printf("The large number is : %d\n", *p3);
  }

  return 0;

}
