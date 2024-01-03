#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    freopen("DONGHO.inp", "r", stdin);
    freopen("DONGHO.out", "w", stdout);
    ll n, dem, donghothuan = 1, donghodao = 13;
    cin >> n;
    if (n >= 0 && n < 12)
        dem = donghothuan + n;
    else if (n < 0 && n >= -12)
        dem = donghodao + n;
    else
        dem = 0;
    cout << dem;
}