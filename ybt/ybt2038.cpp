#include <bits/stdc++.h>
using namespace std;
int a[1010];
int n, m;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    m = 1;
    for (int i = 1; i <= n; i++)
        if (a[i] > a[m])
        {
            m = i;
        }
    cout << m << endl;
    return 0;
}