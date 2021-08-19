#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int> > q;
int n;
long long t, a, b, ans;
int main()
{
    ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        q.push(t);
    }
    for (int i = 1; i < n; i++)
    {
        a = q.top();
        q.pop();
        b = q.top();
        q.pop();
        t = a + b;
        ans += t;
        q.push(t);
    }
    cout << ans << endl;
    return 0;
}