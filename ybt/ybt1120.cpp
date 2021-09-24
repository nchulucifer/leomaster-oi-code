#include <bits/stdc++.h>
using namespace std;
int n, i, j;
int main()
{
    cin >> n >> i >> j;
    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++)
        {
            if (a == i)
                printf("(%d,%d) ", a, b);
        }
    printf("\n");
    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++)
        {
            if (b == j)
                printf("(%d,%d) ", a, b);
        }
    printf("\n");
    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++)
        {
            if (i - a == j - b)
                printf("(%d,%d) ", a, b);
        }
    printf("\n");
    for (int a = n; a >= 1; a--)
        for (int b = n; b >= 1; b--)
        {
            if (a + b == i + j)
                printf("(%d,%d) ", a, b);
        }
    printf("\n");
    return 0;
}