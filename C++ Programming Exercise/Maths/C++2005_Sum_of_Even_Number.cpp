/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int m, n, sum = 0;

    cout << "Enter a starting even number : " << endl;
    cin >> m;

    cout << "Enter a ending even number : " << endl;
    cin >> n;

    for (int i = m; i <= n; i+=2)
    {
        sum += i;
    }
    
    cout << "Sum is : " << sum << endl;
    return 0;
}
