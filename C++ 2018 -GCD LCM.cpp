/*
     Author : Arnob Mahmud

     Mail : arnob.tech.me@gmail.com
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  int num1, num2, rem, GCD, LCM;

  std::cout << "Enter first number :" << '\n';
  std::cin >> num1;

  std::cout << "Enter second number :" << '\n';
  std::cin >> num2;

  while ( num2 != 0)
				{
					rem = num1 % num2;

					num1 = num2;
					num2 = rem;
				}

				GCD = num1;
				LCM = num1 * num2 / GCD;

   std::cout << "GCD is :" << GCD << '\n';
   std::cout << "LCM is :" << LCM << '\n';

   return 0;

}
