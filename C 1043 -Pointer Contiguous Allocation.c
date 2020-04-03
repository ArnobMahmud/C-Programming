/*
   Author : Arnob Mahmud

   Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int *p;
  p = (int*)calloc(8, sizeof(int));

  if (p == NULL) {
    printf("Memory didn't allocated.\n");
  }
  else {
    printf("Memory allocated.\n");
  }

  return 0;

}
