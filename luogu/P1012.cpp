// P1012 [NOIP1998 提高组] 拼数 by leomaster
#include <bits/stdc++.h>
using namespace std;
string s[25];
int n;
bool cmp(string a, string b)
{
    return a + b > b + a;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    sort(s + 1, s + n + 1, cmp);
    for (int i = 1; i <= n; i++)
        cout << s[i];
    cout << endl;
    return 0;
}