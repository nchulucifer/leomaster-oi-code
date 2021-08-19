#include <bits/stdc++.h>
using namespace std;
int a, b, k;
bool flag;
int main()
{
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        flag = 1;
        k = sqrt(i);
        for (int j = 2; j <= k; j++)
            if (i % j == 0)
                flag = 0;
        if (flag)
            cout << i << endl;
    }
    return 0;
}