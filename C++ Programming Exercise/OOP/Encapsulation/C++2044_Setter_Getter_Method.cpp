/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me @ gmail.com
*/

#include <bits/stdc++.h>
using namespace std;

class Student{

private :
    string name;
public :
    void setName(string x){
        x = name;
    }
    string getName(){
        return name;
    }
};

int main(int argc, char const *argv[])
{
    Student s1;
    s1.setName("Arnob");

    cout << s1.getName();
    return 0;
}
