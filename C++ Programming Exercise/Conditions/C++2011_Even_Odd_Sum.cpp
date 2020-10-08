/*
  Author : Arnob Mahmud

  Mail : arnob.tech.me @ gmail.com
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, sum = 0;

    cout << "Enter first number : " << endl;
    cin >> m;

    cout << "Enter first number : " << endl;
    cin >> n;

    sum = m + n;
    cout << "Your sum is : " << sum << endl;

    if ( sum % 2 == 0)
    {
        cout << "Your sum is an even number." << endl;
    } else{
        cout << "Your sum is an odd number." << endl;
    }
    
    return 0;
}
