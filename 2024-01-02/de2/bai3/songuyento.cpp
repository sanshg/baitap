#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N = 1000;
    bool check[1001];
    for (int i = 2; i <= N; i++)
    {
        check[i] = true;
    }
    for (int i = 2; i <= N; i++)
    {
        if (check[i] == true)
        {
            for (int j = 2 * i; j <= N; j += i)
            {
                check[j] = false;
            }
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (check[i] == true)
        {
            printf("%d ", i);
        }
    }
}
