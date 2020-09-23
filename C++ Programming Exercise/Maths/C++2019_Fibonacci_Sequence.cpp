/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  int n, t1, t2, nextTerm;
  t1 = 0;
  t2 = 1;

  std::cout << "Enter the number of terms :" << '\n';
  std::cin >> n;
  std::cout << "Fibonucci Series : " << '\n';

  for (int i = 1; i <= n; i++) {
    std::cout << t1 << " " ;
    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;
  }

  return 0;

}
