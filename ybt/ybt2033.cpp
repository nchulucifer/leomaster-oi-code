#include <bits/stdc++.h>
using namespace std;
int n;
long long s, mod, t = 1;
int main()
{
    cin >> n;
    mod = 1000000;
    for (int i = 1; i <= n; i++)
    {
        t = t * i % mod;
        s = (s + t) % mod;
    }
    cout << s << endl;
    return 0;
}