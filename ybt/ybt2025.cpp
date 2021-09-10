#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    do
    {
        t++;
    } while (!(t % 2 == 1 && t % 3 == 1 && t % 4 == 1 && t % 5 == 1 && t % 6 == 1 && t % 7 == 0));
    cout << t << endl;
    return 0;
}