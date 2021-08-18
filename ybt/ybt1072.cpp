#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double x, y, a1, a2, b1, b2;
    cin >> n;
    cin >> a1 >> a2;
    x = a2 / a1;
    for (int i = 2; i <= n; i++)
    {
        cin >> b1 >> b2;
        y = b2 / b1;
        if (y - x > 0.05)
            cout << "better" << endl;
        else if (x - y > 0.05)
            cout << "worse" << endl;
        else
            cout << "same" << endl;
    }
    return 0;
}