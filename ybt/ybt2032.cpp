#include <bits/stdc++.h>
using namespace std;
bool flag;
int n;
int main()
{
    cin >> n;
    flag = 1;
    int i = 2;
    while (n != 1)
    {
        if (n % i == 0)
        {
            if (flag)
            {
                flag = 0;
                cout << n << "=";
            }
            else
                cout << "*";
            n = n / i;
            cout << i;
        }
        else
            i++;
    }
    return 0;
}