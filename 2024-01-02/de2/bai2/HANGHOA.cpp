#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    freopen("HANGHOA.inp", "r", stdin);
    freopen("HANGHOA.out", "w", stdout);
    ll n, m, a, k = 0, dem;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (k + a < m)
        {
            k += a;
            continue;
        }
        if (k + a > m)
        {
            dem++;
            k = a;
            continue;
        }
        if (k + a == m)
        {
            dem++;
            k = 0;
            continue;
        }
        if (k <= m && k != 0)
        {
            dem++;
        }
    }
    cout << dem;
}