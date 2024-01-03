#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a, b, c, n, i, dem = 0;
    cin >> n;
    for (a = 1; a <= n; a++)
        for (b = 1; b <= n; b++)
            if ((b + 1) * (a + (b / 2)) == n)
            {
                for (i = a; i <= (a + b); i++)
                {
                    if (i == (a + b))
                    {
                        cout << i;
                        dem++;
                    }
                    else
                        cout << i << "+";
                }
                cout << endl;
            }
    cout << endl;
    cout << dem;
}