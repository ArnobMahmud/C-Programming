/*
   Author : Arnob Mahmud
   Mail : arnob.tech.me@gmail.com
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    Student();

    ~Student() = default;
    Student(const Student& other) = default;
    Student(Student&& other) = default;
    Student& operator=(const Student& other) = default;
    Student& operator=(Student&& other) = default;

    void setValue(int x, double y) {
        id = x;
        cgpa = y;
    }
    void display() {
        std::cout << id << " " << cgpa << "\n";
    }

};

int main( int argc, char* argv[])
{
    std::string s1, s2;
    std::cout << Enter 1st students name : << "\n";
    std::cin >> s1;

    std::cout << Enter 2nd students name : << "\n";
    std::cin >> s2;

    Student s1;
    s1.id() = 101;
    s1.cgpa() = 3.52;
    s1.display();

    Student s2;
    s2.id() = 102;
    s2.cgpa() = 3.70;
    s2.display();

    return 0;
}
