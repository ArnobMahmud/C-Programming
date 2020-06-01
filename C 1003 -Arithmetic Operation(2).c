/*
  Author : Arnob Mahmud

  Mail : arnob.tech.me @ gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  float ft_marks, st_marks, final_marks;
  short total_marks;

  ft_marks = 80;
  st_marks = 74;
  final_marks = 97;

  total_marks = ft_marks / 4 + st_marks / 4 + final_marks / 2;
  printf("Total mark is :%ld\n", total_marks);

  return 0;

}
