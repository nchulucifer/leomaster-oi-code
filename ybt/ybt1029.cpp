#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, r;
    long long k;
    cin >> a >> b;
    k = a / b;
    r = a - k * b;
    cout << r << endl;
    return 0;
}