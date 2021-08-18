#include <bits/stdc++.h>
using namespace std;
int gox[] = {-1, 1, 0, 0};
int goy[] = {0, 0, -1, 1};
int r, c, ans;
char a[25][25];
bool b[30];
void dfs(int x, int y, int s)
{
	if (s > ans)
		ans = s;
	for (int i = 0; i < 4; i++)
	{
		int xx = x + gox[i];
		int yy = y + goy[i];
		if (xx >= 1 && xx <= r && yy >= 1 && yy <= c && b[a[xx][yy] - 'A'] == 0)
		{
			b[a[xx][yy] - 'A'] = 1;
			dfs(xx, yy, s + 1);
			b[a[xx][yy] - 'A'] = 0;
		}
	}
}
int main()
{
	cin >> r >> c;
	for (int i = 1; i <= r; i++)
		for (int j = 1; j <= c; j++)
			cin >> a[i][j];
	b[a[1][1] - 'A'] = 1;
	dfs(1, 1, 1);
	cout << ans << endl;
	return 0;
}