/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;

int a[100];
int n, k;
void sinh(int c)
{
    for (int i = 0; i <= 1; i++)
    {
        a[c] = i;
        if (c == n)
        {
            int s = 0;
            for (int i = 1; i <= n; i++)
                s += a[i];
            if (s == k)
            {
                for (int j = 1; j <= n; j++)
                    cout << a[j];
                cout << endl;
            }
        }
        else
            sinh(c + 1);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        sinh(1);
    }
    return 0;
}
