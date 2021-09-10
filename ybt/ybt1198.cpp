#include <bits/stdc++.h>
using namespace std;
char s[105];
double dfs()
{
    cin >> s;
    if (strcmp(s, "*") == 0)
    {
        double a = dfs();
        double b = dfs();
        return a * b;
    }
    else if (strcmp(s, "/") == 0)
    {
        double a = dfs();
        double b = dfs();
        return a / b;
    }
    else if (strcmp(s, "+") == 0)
    {
        double a = dfs();
        double b = dfs();
        return a + b;
    }
    else if (strcmp(s, "-") == 0)
    {
        double a = dfs();
        double b = dfs();
        return a - b;
    }
    else
        return atof(s);
}
int main()
{
    printf("%lf\n", dfs());
    return 0;
}