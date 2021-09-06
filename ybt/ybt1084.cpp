#include <bits/stdc++.h>
using namespace std;
int a, b, sum;
int main()
{
    scanf("%d%d", &a, &b);
    sum = 1;
    for (int i = 1; i <= b; i++)
    {
        sum = sum * a;
        sum = sum % 1000;
    }
    printf("%03d\n", sum);
    return 0;
}