/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me @ gmail.com
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Guess a number between 1 to 10" << endl;
    cin >> n;

    int randomNumber = 1 + rand() % 10;
    if (randomNumber == n)
    {
        cout << "You have won the game ." << endl;
    } else {
        cout << "You lost game ."  << endl;
    }

    return 0;
}
