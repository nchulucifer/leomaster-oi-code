// P1095 [NOIP2007 普及组] 守望者的逃离 by leomaster
#include <bits/stdc++.h>
using namespace std;
int f[300010];
int m, s, t;
int main()
{
    cin >> m >> s >> t;
    f[0] = 0;
    for (int i = 1; i <= t; i++)
    {
        if (m >= 10)
        {
            f[i] = f[i - 1] + 60;
            m = m - 10;
        }
        else
        {
            f[i] = f[i - 1];
            m = m + 4;
        }
    }
    for (int i = 1; i <= t; i++)
    {
        if (f[i] < f[i - 1] + 17)
            f[i] = f[i - 1] + 17;
        if (f[i] >= s)
        {
            cout << "Yes" << endl;
            cout << i << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    cout << f[t] << endl;
    return 0;
}
/*
这个题目里有两个很显然的点，闪现的优先级是比纯跑步高的，我们是以时间戳作为状态转移的。
所以我们先以闪现做优先，计算出每个状态的可达范围，然后我们再以跑步维护我们的状态的真实性。
*/