#include <bits/stdc++.h>
using namespace std;
struct node
{
    int a, b;
} s[10010];
int n, tot, pos;
bool cmp(node x, node y)
{
    if (x.b != y.b)
        return x.b < y.b;
    return x.a < y.a;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i].a >> s[i].b;
    pos = -2e9;
    sort(s + 1, s + n + 1, cmp);
    for (int i = 1; i <= n; i++)
    {
        if (pos < s[i].a)
        {
            tot++;
            pos = s[i].b;
        }
    }
    cout << tot << endl;
    return 0;
}