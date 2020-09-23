/*
   Author : Arnob Mahmud

   Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int *p;
  p = (int*)malloc(5 * sizeof(int));     // here (int*) means typecasting. it tranfoms the void type data to integer //

  if (p == NULL) {
    printf("The memory didn't allocated.\n");
  }
  else {
    printf("The memory allocated.\n");
  }

  return 0;

}
