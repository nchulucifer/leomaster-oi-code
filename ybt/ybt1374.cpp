#include <bits/stdc++.h>
using namespace std;
double x, y, xx, yy, dx, dy;
int h, m;
int main()
{
    cin >> x >> y;
    double sum = 0;
    while (cin >> x >> y >> xx >> yy)
    {
        dx = x - xx;
        dy = y - yy;
        sum += sqrt(dx * dx + dy * dy) * 2;
    }
    m = round(sum / 1000 / 20 * 60);
    h = m / 60;
    m = m % 60;
    printf("%d:%02d\n", h, m);
    return 0;
}
