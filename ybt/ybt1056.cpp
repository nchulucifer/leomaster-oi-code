#include <bits/stdc++.h>
using namespace std;
double x, y;
int main()
{
    cin >> x >> y;
    if ((x >= -1 && x <= 1) && (y >= -1 && y <= 1))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}