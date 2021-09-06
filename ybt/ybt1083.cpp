#include <bits/stdc++.h>
using namespace std;
int a, b, n, x;
int main()
{
    int a, b, sum = 1, day;
    cin >> a >> b;
    for (int i = 1; i <= b; i++)
    {
        sum = sum * a;
        sum = sum % 7;
    }
    day = sum;
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wendesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    default:
        cout << "Sunday" << endl;
    }
    return 0;
}