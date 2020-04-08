/*
      Author : Arnob Mahmud

      Mail : arnob.tech.me@gmail.cpm
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
    printf("No space availabe!\n");
  }
}

int pop() {
  if ( top >= 0) {
    int val = stack[top];
    top -= 1;
    return val;
  }
  else {
    printf("Exception from pop!\n");
  }
  return -1;
}

int main(int argc, char const *argv[]) {
  
  push(1);
  push(2);
  push(3);
  push(4);
  push(5);
  printf("Pop item : %d\n", pop());
  push(6);                              // This value will be replaced

  return 0;

}
