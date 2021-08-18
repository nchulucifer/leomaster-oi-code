#include <bits/stdc++.h>
using namespace std;
float a, b, s, ans;
int main()
{
    s = 9.6 * 6;
    a = s - 9.4 * 5;
    b = s - 9.8 * 5;
    ans = (s - a - b) / 4;
    printf("%5.2f\n", ans);
    return 0;
}