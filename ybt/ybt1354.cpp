#include <bits/stdc++.h>
using namespace std;
string str;
stack<char> s;
bool flag;
int main()
{
    getline(cin, str);
    flag = 1;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(' || str[i] == '[')
            s.push(str[i]);
        if (str[i] == ')' || str[i] == ']')
        {
            if (s.empty())
            {
                flag = 0;
                break;
            }
            else if (str[i] == ')' && s.top() == '[')
            {
                flag = 0;
                break;
            }
            else if (str[i] == ']' && s.top() == '(')
            {
                flag = 0;
                break;
            }
            else
                s.pop();
        }
    }
    if (!s.empty())
        flag = 0;
    if (flag)
        cout << "OK" << endl;
    else
        cout << "Wrong" << endl;
    return 0;
}