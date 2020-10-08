/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, sum = 0;

    cout << "Enter ending number : " << endl;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum is : " << sum << endl;
    
    return 0;
}
