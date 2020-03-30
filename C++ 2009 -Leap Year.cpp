/*
  Author : Arnob Mahmud

  Mail : arnob.tech.me @ gmail.com
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int yr;

    std::cout << "Enter a Year:" << '\n';
    std::cin >> yr;

      if ( yr % 4 == 0 ) {
        std::cout << "\nThis is a leap year." << '\n';
      }
     else {
     std::cout << "\nThis is not a leap year." << '\n';
     }

  return 0;

}
