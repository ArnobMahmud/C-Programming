/*
   Author : Arnob Mahmud

  Mail : arnob.tech.me@gmail.com
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  int x, sum = 1;

  std::cout << "Enter your value :" << '\n';
  std::cin >> x;

  for (int i = 1; i <= x; i++) {
    sum = sum * i;
  }
  std::cout << "Factorial is :" << sum << '\n';

  return 0;
}
