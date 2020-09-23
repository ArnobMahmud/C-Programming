/*
    Author : Arnob Mahmud
    
    Mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#define  SPACE 5

int stack[SPACE];
int top = -1;

void push(int x) {
  if ( top < SPACE -1 ) {
    top += 1;
    stack[top] = x;
    printf("Placement successful! Value added : %d\n", x);
  }
  else {
    printf("No space availabe\n");
  }
}

int main(int argc, char const *argv[]) {

  push(1);
  push(2);
  push(3);
  push(4);
  push(5);
  push(6);      // This value won't be added
  
  return 0;
}
