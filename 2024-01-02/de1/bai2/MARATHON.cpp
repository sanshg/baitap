#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    freopen("MARATHON.inp", "r", stdin);
    freopen("MARATHON.out", "w", stdout);
    int n, i, a, b, c, mang[1000];
    cin >> n >> a;
    for (int i = 1; i <= n; i++)
    {
        cin >> mang[i];
    }
    sort(mang + 1, mang + n + 1, greater<ll>());
    cout << mang[a];
}