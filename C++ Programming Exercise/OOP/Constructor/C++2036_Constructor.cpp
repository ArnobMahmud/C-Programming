/*
   Author : Arnob Mahmud

   Mail : arnob.tech.me@gmail.com
*/

#include<bits/stdc++.h>
using namespace std;

class Student{
public :

    int id;
    double cgpa;

    void display()
    {
        cout << id << " " << cgpa << "\n";
    }
    Student(int x, double y)            // constructor is one kind of method which name is exactly class name
                                        // constructor has no return type, even void() can't be it's return type.
    {
        id = x;
        cgpa = y;
    }
};

int main(int argc, char* argv[]) {

   Student arnob(47, 3.70);
   arnob.display();

   return 0;
}
