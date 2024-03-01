/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;
int n, k;

int a[100];

void sinh(int c, int k, int n)
{
    for (int i = 0; i <= 1; i++)
    {
        a[c] = i;
        if (c == k)
        {
            for (int j = 1; j <= k; j++)
                cout << a[j] << ' ';
            if (n % 2 != 0)
                for (int j = k - 1; j >= 1; j--)
                    cout << a[j] << ' ';
            else
                for (int j = k; j >= 1; j--)
                    cout << a[j] << ' ';
            cout << endl;
        }
        else
            sinh(c + 1, k, n);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /*int t;
    cin >> t;
    while(t--)
    {

    }
    */
    cin >> n;
    if (n % 2 == 0)
        k = n / 2;
    else
        k = n / 2 + 1;
    sinh(1, k, n);
    return 0;
}
