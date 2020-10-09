/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me @ gmail.com
*/

#include <bits/stdc++.h>
using namespace std;

class Student{
public :

    int id;
    float cgpa;

    void setData(int x, float y){
        id = x;
        cgpa = y;
    }
    
    void display(){
        cout << "Id: " << id << " CGPA: " << cgpa << endl;
    }
};

int main(int argc, char const *argv[])
{
    Student Arnob;
    Arnob.setData(48, 3.70);
    Arnob.display();
    
    return 0;
}
