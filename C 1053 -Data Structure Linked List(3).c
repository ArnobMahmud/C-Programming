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

int peek() {
  if ( top >= 0 ) {
    return stack[top];
  }
  else {
    printf("Empty stack!\n");
  }
  return -1;
}

int main(int argc, char const *argv[]) {

  peek();     // 1st call.No top value there!

  push(1);
  push(2);
  push(3);
  push(4);
  push(5);
  push(6);   // This value won't be added

  peek();   // Work upon top value
  printf("Top of stack : %d\n", peek());

  return 0;

}
