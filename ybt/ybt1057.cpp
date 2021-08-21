#include <bits/stdc++.h>
using namespace std;
int a, b, ans;
char c;
int main()
{
    cin >> a >> b >> c;
    switch (c)
    {
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '*':
        ans = a * b;
        break;
    case '/':
        if (b == 0)
        {
            cout << "Divided by zero!" << endl;
            return 0;
        }
        else
        {
            ans = a / b;
            break;
        }
    default:
        cout << "Invalid operator!" << endl;
        return 0;
    }
    cout << ans << endl;
    return 0;
}