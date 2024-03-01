/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[1001];

void sinh(int i)
{
    for (int j = a[i - 1] + 1; j <= n; j++)
    {
        a[i] = j;
        if (i == k)
        {
            for (int c = 1; c <= k; c++)
                cout << a[c];
            cout << ' ';
        }
        else
            sinh(i + 1);
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
        memset(a, 0, sizeof(a));
        cin >> n >> k;
        sinh(1);
        cout << endl;
    }

    return 0;
}