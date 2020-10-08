/*
  Author : Arnob Mahmud

  Mail : arnob.tech.me @ gmail.com
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char chr;

    cout << "Enter an alphabet : " << endl;
    cin >> chr;

    if ( chr == 'a' || 'e' || 'i' || 'o' || 'u')
    {
        cout << "You have entered an vowel" << endl;
    } else {
        cout << "You have entered a consonant" << endl;
    }
    
    return 0;
}
