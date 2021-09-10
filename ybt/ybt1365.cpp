#include <bits/stdc++.h>
using namespace std;
int n, t, tot;
char tree[2050];
void dfs(int k)
{
    if (2 * k + 1 <= tot)
    {
        dfs(2 * k);
        dfs(2 * k + 1);
    }
    cout << tree[k];
}
int main()
{
    cin >> n;
    tot = (1 << (n + 1)) - 1;
    for (int i = (1 << n); i <= tot; i++)
    {
        scanf("%1d", &t);
        if (t == 1)
            tree[i] = 'I';
        else
            tree[i] = 'B';
    }
    for (int i = (1 << n) - 1; i >= 1; i--)
    {
        if (tree[2 * i] == 'B' && tree[2 * i + 1] == 'B')
            tree[i] = 'B';
        else if (tree[2 * i] == 'I' && tree[2 * i + 1] == 'I')
            tree[i] = 'I';
        else
            tree[i] = 'F';
    }
    dfs(1);
    return 0;
}