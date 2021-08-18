#include <bits/stdc++.h>
using namespace std;
int h, r, b;
double a;
int main()
{
	cin >> h >> r;
	a = 3.14159 * r * r * h;
	b = ceil(20000 / a);
	cout << b << endl;
	return 0;
}