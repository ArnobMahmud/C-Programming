/*
    Author : Arnob Mahmud
    
    Mail : arnob.tech.me@gmail.com
*/

#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{

    float x, y;

    std::cout << "\nEnter the value of 'X'" << '\n';
    std::cin >> x;

    std::cout << "\nEnter the value of 'Y'" << '\n';
    std::cin >> y;

    if (y == 0 && x > 0)
    {
        std::cout << "\nIt's lies in positive 'X' axis " << '\n';   //for positive x axis
    }
    else if (y == 0 && x < 0)
    {
        std::cout << "\nIt's lies in negative 'X' axis " << '\n';   //for negative x axis
    }
    else if (x == 0 && y > 0)
    {
        std::cout << "\nIt's in positive 'Y' axis " << '\n';    //same for y
    }
    else if (x == 0 && y < 0)
    {
        std::cout << "\nIt's in negative 'Y' axis " << '\n';
    }
    else if (x > 0 && y > 0)
    {
        std::cout << "\nQ1" << '\n';    //checking for quadrents
    }
    else if (x < 0 && y > 0)
    {
        std::cout << "\nQ2" << '\n';
    }
    else if (x < 0 && y < 0)
    {
        std::cout << "\nQ3" << '\n';
    }
    else if (x > 0 && y < 0)
    {
        std::cout << "\nQ4" << '\n';
    }
    else
    {
        std::cout << "\nOrigin" << '\n'; //otherwise origin
    }

    return 0;
}
