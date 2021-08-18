#include <bits/stdc++.h>
using namespace std;
int n, m;
bool dfs(int a, int b)
{
    if (a < b)
        swap(a, b);
    if (a / b >= 2 || a == b)
        return true;
    return !dfs(b, a - b);
}
int main()
{

    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
            return 0;
        if (dfs(n, m))
            cout << "win" << endl;
        else
            cout << "lose" << endl;
    }
    return 0;
}