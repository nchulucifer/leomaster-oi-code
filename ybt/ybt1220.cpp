#include <bits/stdc++.h>
using namespace std;
int ans, n;
int cnt[105];
string s[105];
char ch;

void dfs(string now, int len)
{
    ans = max(ans, len);
    for (int i = 1; i <= n; ++i)
    {
        if (cnt[i] < 2)
        {
            for (int j = 1; j < min(now.length(), s[i].length()); j++)
            {
                string a = now.substr(now.length() - j); //取 now 从 now.length()-j 开始到结尾的子串
                string b = s[i].substr(0, j); //取 s[i] 从 0 开始长度为 j 的子串
                if (a == b) //如果 now 串长度为 j 的后缀和 s[i] 长度为j的前缀可以拼接
                {
                    ++cnt[i];
                    dfs(s[i], len + s[i].length() - j);
                    --cnt[i];
                }
            }
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    cin >> ch;
    for (int i = 1; i <= n; i++)
        if (s[i][0] == ch) //如果 s[i] 是以 ch 为开头的，那么就说明可以作为起始串
        {
            ++cnt[i];
            dfs(s[i], s[i].length());
            --cnt[i];
        }
    cout << ans << endl;
    return 0;
}