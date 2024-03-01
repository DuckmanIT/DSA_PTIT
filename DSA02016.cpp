/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;

int n, cnt;
int a[100], c[100], d1[100], d2[100];

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (c[j] == 1 && d1[i - j + n] == 1 && d2[i + j - 1] == 1)
        {
            a[i] = j;
            c[j] = d1[i - j + n] = d2[i + j - 1] = 0;
            if (i == n)
            {
                cnt++;
            }
            else
            {
                Try(i + 1);
            }
            c[j] = d1[i - j + n] = d2[i + j - 1] = 1;
        }
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
        cin >> n;
        cnt = 0;
        // memset(c, 1, sizeof(c));
        // memset(d1, 1, sizeof(d1));
        // memset(d2, 1, sizeof(d2));
        for (int i = 0; i < 100; i++)
        {
            c[i] = d1[i] = d2[i] = 1;
        }
        Try(1);
        cout << cnt << endl;
    }

    return 0;
}