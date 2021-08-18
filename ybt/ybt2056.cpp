#include <bits/stdc++.h>
using namespace std;
double a, b, c;
int main()
{
    cin >> a >> b >> c;
    if (a < b)
        swap(a, b);
    if (a < c)
        swap(a, c);
    cout << a << endl;
    return 0;
}