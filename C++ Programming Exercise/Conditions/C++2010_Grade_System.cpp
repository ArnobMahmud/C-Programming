/*
  Author : Arnob Mahmud

  Mail : arnob.tech.me @ gmail.com
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int m;
    cout << "Enter your marks" << endl;
    cin >> m;

    if (m >= 80)
    {
        cout << "Your grade is A+" << endl;
    }
    else if( m >= 75)
    {
        cout << "Your grade is A" << endl;
    }
    else if( m >= 70)
    {
        cout << "Your grade is A-" << endl;
    }
    else if( m >= 65)
    {
        cout << "Your grade is B+" << endl;
    }
    else if( m >= 60)
    {
        cout << "Your grade is B" << endl;
    }
    else if( m >= 55)
    {
        cout << "Your grade is B-" << endl;
    }
    else if( m >= 50)
    {
        cout << "Your grade is C" << endl;
    }
    else if( m >= 45)
    {
        cout << "Your grade is C-" << endl;
    }
    else if( m >= 40)
    {
        cout << "Your grade is D" << endl;
    }
    else
    {
        cout << "Your grade is F" << endl;
    }
    return 0;
}
