/*
   Author : Arnob Mahmud

   Mail : arnob.tech.me@gmail.com
*/

#include <bits/stdc++.h>
using namespace std;

class University{
public :

    string location;

        void setDetails(string x){
            x = location;
            cout << "Location of AUST is " << location << endl;
        }

        University(){
            cout << "It is a default constructor" << endl;
        }

};

int main(int argc, char const *argv[])
{
    
    University AUST(string Tejgaon);
    University defaultConstructor;

    return 0;
}