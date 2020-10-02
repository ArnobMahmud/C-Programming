#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 20;
    int y = 50;
    int *pt1, *pt2;

    *pt1 = x;
    *pt2 = y;

    int z = *pt1 + *pt2;
    cout << z << endl;

    return 0;
}
