#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string str;
stack<ll> s;
ll a, b, t;
int main()
{
    getline(cin, str);
    for (int i = 0; str[i] != '@' && i < str.size(); i++)
    {
        switch (str[i])
        {
        case '+':
            b = s.top();
            s.pop();
            a = s.top();
            s.pop();
            s.push(a + b);
            break;
        case '-':
            b = s.top();
            s.pop();
            a = s.top();
            s.pop();
            s.push(a - b);
            break;
        case '*':
            b = s.top();
            s.pop();
            a = s.top();
            s.pop();
            s.push(a * b);
            break;
        case '/':
            b = s.top();
            s.pop();
            a = s.top();
            s.pop();
            s.push(a / b);
            break;
        default:
            t = 0;
            while (str[i] != ' ')
            {
                t = t * 10 + (str[i] - '0');
                i++;
            }
            s.push(t);
            break;
        }
    }
    cout << s.top() << endl;
    return 0;
}