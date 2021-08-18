#include <bits/stdc++.h>
using namespace std;
double bt, wt, x;
int kind;
int main()
{
    cin >> x;
    bt = x / 3 + 50;
    wt = x / 1.2;
    if (bt > wt)
        kind = 1;
    if (bt < wt)
        kind = 2;
    if (bt == wt)
        kind = 3;
    switch (kind)
    {
    case 1:
        cout << "Walk" << endl;
        break;
    case 2:
        cout << "Bike" << endl;
        break;
    default:
        cout << "All" << endl;
    }
    return 0;
}