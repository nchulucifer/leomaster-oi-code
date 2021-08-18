#include <bits/stdc++.h>
using namespace std;
bool vis[10];
char mp[10][10];
int n, k, sum;
void dfs(int x, int y)
{
	if (y == k)
		sum++;
	for (int i = x; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			if (mp[i][j] == '#' && vis[j] == 0)
			{
				vis[j] = 1;
				dfs(i + 1, y + 1);
				vis[j] = 0;
			}
		}
}
int main()
{
	while (cin >> n >> k)
	{
		if (n == -1 && k == -1)
			return 0;
		memset(vis, 0, sizeof(vis));
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				cin >> mp[i][j];
		sum = 0;
		dfs(1, 0);
		cout << sum << endl;
	}
}