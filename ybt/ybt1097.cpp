#include <bits/stdc++.h>
using namespace std;
int h, w;
char c;
bool flag;
int main()
{
    cin >> h >> w >> c >> flag;
    if (flag)
    {
        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= w; j++)
                cout << c;
            cout << endl;
        }
    }
    else
    {
        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= w; j++)
                if (i == 1 || j == 1 || i == h || j == w)
                    cout << c;
                else
                    cout << ' ';
            cout << endl;
        }
    }
    return 0;
}