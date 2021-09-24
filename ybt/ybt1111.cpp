#include <bits/stdc++.h>
using namespace std;
int a, b, s, m, day;
int main()
{
    m = day = s = 0;
    for (int i = 1; i <= 7; i++)
    {
        cin >> a >> b;
        s = a + b;
        if ((s > m) && (s > 8))
        {
            m = s;
            day = i;
        }
    }
    cout << day << endl;
    return 0;
}