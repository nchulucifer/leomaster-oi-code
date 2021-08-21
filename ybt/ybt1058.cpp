#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d, x1, x2;
    double precision = 1e-6;
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (d < 0 && fabs(d) > precision * precision)
    {
        cout << "No answer!";
        return 0;
    }
    if (fabs(d) < precision * precision)
    {
        x1 = -b / (2 * a);
        printf("x1=x2=%.5lf\n", x1);
    }
    else
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        if (x1 < x2)
            printf("x1=%.5lf;x2=%.5lf", x1, x2);
        else
            printf("x1=%.5lf;x2=%.5lf", x2, x1);
    }
    return 0;
}