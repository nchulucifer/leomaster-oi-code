#include <bits/stdc++.h>
using namespace std;
char c;
int s, flag;
int main()
{
    s = flag = 0;
    for (;;)
    {
        cin >> c;
        if (c == '@')
            break;
        if (c == '(')
            s++;
        if (c == ')' && s == 0)
        {
            flag = 1;
            break;
        }
        if (c == ')')
            s--;
    }
    if (s == 0 && flag == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}