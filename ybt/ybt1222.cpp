#include <bits/stdc++.h>
using namespace std;
int n, m, t;
int f(int m, int n)
{
    if (n == 1 || m == 0)
        return 1;
    if (m < n)
        return f(m, m);
    else
        return f(m, n - 1) + f(m - n, n); // i 个苹果放入 j-1 个盘子，最后一个盘子不放的答案加上每个盘子先放一个苹果，i-j 个苹果放入 j 个盘子的答案
}

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        cout << f(m, n) << endl;
    }
    return 0;
}