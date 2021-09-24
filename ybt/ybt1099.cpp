#include <bits/stdc++.h>
using namespace std;
int n, t, nth;
int main()
{
    cin >> n;
    nth = 0;
    t = 1;
    while (1)
    {
        t++;
        bool flag = 1;
        for (int i = 2; i <= sqrt(t); i++)
        {
            if (t % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            nth++;
        if (nth == n)
            break;
    }
    cout << t << endl;
    return 0;
}