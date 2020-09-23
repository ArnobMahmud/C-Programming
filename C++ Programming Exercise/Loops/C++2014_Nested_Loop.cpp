/*
  Author : Arnob Mahmud

  Mail : arnob.tech.me @ gmail.com
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int v, i, j;

  std::cout << "Star Printing Program" << '\n';
  std::cout << "Enter your choice:" << '\n';
  std::cin >> v;

  for ( i = 0; i < v; i++) {
    for ( j = 0; j <= i; j++) {
      std::cout << "*";
    }
    std::cout << '\n';
  }
  return 0;
}
