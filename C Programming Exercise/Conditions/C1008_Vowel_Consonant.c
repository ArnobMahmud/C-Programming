/*
  Author : Arnob Mahmud

  Mail : arnob.tech.me @ gmail.com
*/

#include <stdio.h>

int main()
{
  char ch;

  printf("Enter your character:\n");
  scanf("%c", &ch);

    if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
      printf("Your character is a vowel\n");
    }
    else {
      printf("Your character is a consonant\n");
    }

  return 0;

}