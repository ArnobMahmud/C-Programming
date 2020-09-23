/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[]) {

  int pick, n;
  std::cout << "Enter value : " << '\n';
  std::cin >> n ;

  std::cout << '\n' << "Random Picking Numbers: " << '\n';
  for (int i = 0; i < n; i++) {
    pick = (rand() % 10 )+ 1;
    std::cout << '\t' << pick << '\n';
  }

  return 0;

}
