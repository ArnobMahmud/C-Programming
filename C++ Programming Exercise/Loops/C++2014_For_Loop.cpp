/*
  Author : Arnob Mahmud

  Mail : arnob.tech.me @ gmail.com
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int m, n, count;

    cout << "Enter your first number : " << endl;
    cin >> m;

    cout << "Enter your ending number : " << endl;
    cin >> n;

    cout << "Even numbers between this range  : " << endl;
    for (int i = m; i < n; i++)
    {
        if ( i % 2 == 0)
        {
            count++;
            cout << i << endl;
            
        }   
        else
        {
            continue;
        }
    }

    cout << "Total even numbers are : " << count << endl;
    
    return 0;
}
