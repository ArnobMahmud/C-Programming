/*
   Author : Arnob Mahmud

   Mail : arnob.tech.me@gmail.com
*/

#include<bits/stdc++.h>
using namespace std;
class student{
public :
    int id;
    double cgpa;

    void display()
    {
        std::cout << id << " " << cgpa << "\n";
    }
    student(int x, double y)
    {
        id = x;
        cgpa = y;
    }
};

int main(int argc, char* argv[]) {

   student arnob(101, 3.70);
   arnob.display();

   student araf(102, 3.60);
   araf.display();

   return 0;
}
