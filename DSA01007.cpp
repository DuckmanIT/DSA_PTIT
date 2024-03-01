/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;

char a[1001];
int n;

void sinh(int i)
{
    for (char c = 'A'; c <= 'B'; c++)
    {
        a[i] = c;
        if (i == n)
        {
            for (int j = 1; j <= n; j++)
                cout << a[j];
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
        cin >> n;
        sinh(1);
        cout << endl;
    }

    return 0;
}