#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x, y, i = 0;
	cin >> x >> y;
	if (x < 60)
		i++;
	if (y < 60)
		i++;
	if (i == 1)
		cout << 1;
	else
		cout << 0;
	return 0;
}