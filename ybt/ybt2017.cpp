#include <bits/stdc++.h>
using namespace std;
int n, ans;
int main()
{
    cin >> n;
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}