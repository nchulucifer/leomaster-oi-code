#include <bits/stdc++.h>
using namespace std;
int n, r;
int a[25];
bool b[25];
void print()
{
	for (int i = 1; i <= r; i++)
		printf("%3d", a[i]);
	printf("\n");
}
void dfs(int k)
{
	for (int i = 1; i <= n; i++)
	{
		if (b[i] == 0 && i > a[k - 1])
		{
			a[k] = i;
			b[i] = 1;
			if (k == r)
				print();
			else
				dfs(k + 1);
			b[i] = 0;
		}
	}
}
int main()
{
	cin >> n >> r;
	dfs(1);
	return 0;
}