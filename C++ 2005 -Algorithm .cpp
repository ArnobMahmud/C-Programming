/*
  Author : Arnob Mahmud
  
  Mail : arnob.tech.me@gmail.com
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  float b, h, area;

  std::cout << "Enter the value of base : " << '\n';
  std::cin >> b;

  std::cout << "Enter the value of height : " << '\n';
  std::cin >> h;

  area = 0.5 * b *h;
  std::cout << "The area of triangle is : " << area << '\n';

  return 0;

}
