/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;

int k, n;
char c;
int a[100];
void Try(int i = 1)
{
    for (int j = a[i - 1]; j <= n; j++)
    {
        a[i] = j;
        if (i == k)
        {
            for (int h = 1; h <= k; h++)
                cout << (char)('A' + a[h]);
            cout << endl;
        }
        else
            Try(i + 1);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    cin >> c >> k;
    n = c - 'A';
    Try();
    return 0;
}