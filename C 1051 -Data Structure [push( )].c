#include <stdio.h>
#include <conio.h>
#define  SPACE 5

int stract[SPACE];
int top = -1;

void push(int x) {
  if ( top < SPACE -1 ) {
    top += 1;
    printf("Placement successful! Value added : %d\n", x);
  }
  else {
    printf("No space availabe\n");
  }
}

int pop() {
  return -1;
}

int peek() {
  return -1;
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
