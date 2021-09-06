#include <bits/stdc++.h>
using namespace std;
string s1, s2;
void dfs(int l1, int r1, int l2, int r2)
{
	int root = s2.find(s1[l1]);
	if (root > l2)
		dfs(l1 + 1, l1 + root - l2, l2, root - 1);
	if (root < r2)
		dfs(l1 + root - l2 + 1, r1, root + 1, r2);
	cout << s1[l1];
}
int main()
{
	cin >> s1 >> s2;
	dfs(0, s1.length() - 1, 0, s2.length() - 1);
	return 0;
}