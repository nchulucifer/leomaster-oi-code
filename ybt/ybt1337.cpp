#include <bits/stdc++.h>
using namespace std;
int tree[100010][26];
string s;
int tot;
void insert()
{
    int len = s.length();
    int p = 1;
    for (int i = 0; i < len; i++)
    {
        int c = s[i] - 'A';
        if (tree[p][c] == 0)
        {
            tot++;
            tree[p][c] = tot;
        }
        p = tree[p][c];
    }
    return;
}
int main()
{
    tot = 1;
    while (cin >> s)
    {
        insert();
    }
    cout << tot << endl;
    return 0;
}