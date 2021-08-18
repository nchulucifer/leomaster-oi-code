#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x, y;
    char op;
    cin >> x >> y >> op;
    switch (op)
    {
    case '+':
        cout << x + y << endl;
        break;
    case '-':
        cout << x - y << endl;
        break;
    case '*':
        cout << x * y << endl;
        break;
    case '/':
        if (fabs(y) < 1e-6)
            cout << "Divided by zero!" << endl;
        else
            cout << x / y << endl;
        break;
    default:
        cout << "Invalid operator!" << endl;
    }
    return 0;
}
