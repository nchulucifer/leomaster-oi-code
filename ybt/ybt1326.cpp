#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll qpow(ll a, ll b, ll p)
{
    ll res = 1LL % p;
    while (b)
    {
        if (b & 1)
            res = res * a % p;
        a = a * a % p;
        b >>= 1;
    }
    return res;
}
int main()
{
    ll a, b, k;
    cin >> a >> b >> k;
    printf("%lld^%lld mod %lld=%lld\n", a, b, k, qpow(a, b, k));
    return 0;
}