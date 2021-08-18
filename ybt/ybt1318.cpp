#include <bits/stdc++.h>
using namespace std;
int n;
int a[1010];
void print(int r)
{
    cout << n << "=";
    for (int i = 1; i < r; i++)
        cout << a[i] << "+";
    cout << a[r] << endl;
}
void dfs(int s, int k)
{
    for (int i = a[k - 1]; i <= s; i++)
    {
        if (i < n)
        {
            a[k] = i;
            s = s - i;
            if (s == 0)
                print(k);
            else
                dfs(s, k + 1);
            s = s + i;
        }
    }
}
int main()
{
    cin >> n;
    a[0] = 1;
    dfs(n, 1);
    return 0;
}