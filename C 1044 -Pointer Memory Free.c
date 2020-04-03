/*
   Author : Arnob Mahmud

   Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int *p;
  p = (int*)calloc(7, sizeof(int));

  if (p == NULL) {
    printf("Memory didn't Allocated.\n");
  }
  else {
    printf("Memory Allocated\n");
  }

  free(p);
  printf("Memory freed.\n");

  return 0;

}
