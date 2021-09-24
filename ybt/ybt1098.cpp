#include <bits/stdc++.h>
using namespace std;
int a;
int main()
{
    cin >> a;
    for (int i = 2; i <= sqrt(a); i++)
        if (a % i == 0)
            printf("%d\n", a / i);
    return 0;
}