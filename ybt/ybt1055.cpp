#include <bits/stdc++.h>
using namespace std;
int y;
int main()
{
    cin >> y;
    if ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)))
        cout << "Y" << endl;
    else
        cout << "N" << endl;
    return 0;
}