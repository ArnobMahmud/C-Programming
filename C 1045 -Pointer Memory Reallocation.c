/*
   Author : Arnob Mahmud

   Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int *p;
  p = (int*)malloc(10);

  /* p = (int*)malloc(2 * sizeof(int));
      p = (int*)malloc(2 * 4);
       p = (int*)malloc(8); */

  if ( p == NULL) {
    printf("Memory didn't allocated.\n");
  }
  else {
    printf("Memory allocated.\n");
  }

  p = realloc(p, 20);
  printf("Memory reallocated.\n");

  return 0;

}
