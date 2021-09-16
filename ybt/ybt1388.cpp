#include <bits/stdc++.h>
using namespace std;
char x;
string s, fa;
unordered_map<string, string> father;
string findf(string a)
{
    if (father[a] != a)
        father[a] = findf(father[a]);
    return father[a];
}
void print(string a)
{
    cout << a << " " << findf(father[a]) << endl;
}
int main()
{
    for (;;)
    {
        cin >> x;
        if (x == '#')
        {
            cin >> s;
            fa = s;
            if (father.find(s) == father.end())
                father[fa] = fa;
            else
                father[fa] = findf(fa);
        }
        if (x == '+')
        {
            cin >> s;
            father[s] = findf(father[fa]);
        }
        if (x == '?')
        {
            cin >> s;
            print(s);
        }
        if (x == '$')
            return 0;
    }
    return 0;
}