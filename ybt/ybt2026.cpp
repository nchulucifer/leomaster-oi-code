#include <bits/stdc++.h>
using namespace std;
int n, s, t;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        t = 1;
        for (int j = 1; j <= i; j++)
        {
            t = t * j;
        }
        s = s + t;
    }
    cout << s << endl;
    return 0;
}