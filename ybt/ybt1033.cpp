#include <bits/stdc++.h>
using namespace std;
int main()
{
	double Xa, Xb, Ya, Yb;
	double len;
	scanf("%lf%lf", &Xa, &Ya);
	scanf("%lf%lf", &Xb, &Yb);
	len = sqrt((Xa - Xb) * (Xa - Xb) + (Ya - Yb) * (Ya - Yb));
	printf("%.3lf\n", len);
	return 0;
}