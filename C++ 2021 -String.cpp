/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me @ gmail.com
*/

#include <iostream>
#include <string>
using namespace std;

class Human{
public :
  string name;

  void introduce() {
    std::cout << "Hello" << name <<'\n';
  }

  void display() {
    std::cout << "C++ random exercise going on!" << '\n';
  }

};

int main(int argc, char const *argv[]) { 

  Human arnob;
  arnob.name = " Arnob.";

  arnob.introduce();
  arnob.display();

  return 0;

}
