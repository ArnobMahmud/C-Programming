/*
    Author : Arnob Mahmud
    
    Mail : arnob.tech.me@gmail.com
*/

#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {

  float x, y;

  std::cout << "\nEnter the value of 'x'" << '\n';
  std::cin >> x ;

  std::cout << "\nEnter the value of 'y'" << '\n';
  std::cin >> y ;

  if ( y == 0){
    std::cout << "\nIt's 'X' axis " << '\n';
  }
  else if ( x == 0) {
    std::cout << "\nIt's 'Y' axis " << '\n';
  }
  else if( x > 0 && y > 0) {
    std::cout << "\nQ1" << '\n';
  }
  else if ( x < 0 && y > 0) {
    std::cout << "\nQ2" << '\n';
  }
  else if ( x < 0 && y < 0) {
    std::cout << "\nQ3" << '\n';
  }
  else if ( x > 0 && y < 0) {
    std::cout << "\nQ4" << '\n';
  }
  else {
  std::cout << "\nOrigin" << '\n';
  }

  return 0;

}
