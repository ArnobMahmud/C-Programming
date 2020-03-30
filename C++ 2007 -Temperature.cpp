/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  float c, f;

  std::cout << "Enter the temperature in celcius scale : " << '\n';
  std::cin >> c;

  f = 32 + (9 * c)/5;
  std::cout << "The temperature in farenheit scale : " << f << '\n';

  return 0;

}
