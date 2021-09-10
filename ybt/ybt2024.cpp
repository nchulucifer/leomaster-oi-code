#include <bits/stdc++.h>
using namespace std;
int n, k;
int main()
{
    cin >> n;
    k = 1;
    do
    {
        k = k * 1992;
        k = k % 100;
        n--;
    } while (n);
    cout << k << endl;
    return 0;
}