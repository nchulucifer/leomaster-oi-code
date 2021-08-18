#include <bits/stdc++.h>
using namespace std;
char s[105];
int n;
int main()
{
    cin >> s + 1;
    n = strlen(s + 1);
    n--;
    for (int i = 1; i <= n / 2; i++)
    {
        if (s[i] != s[n - i + 1])
        {
            puts("No");
            return 0;
        }
    }
    puts("Yes");
    return 0;
}