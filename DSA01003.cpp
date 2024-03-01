/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[1001];
        for (int c = 1; c <= n; c++)
        {
            cin >> a[c];
        }
        int i = n - 1;
        while (i >= 1 && a[i] > a[i + 1])
            i--;
        if (i == 0)
        {
            for (int j = 0; j < n; j++)
                cout << j + 1 << ' ';
            cout << endl;
        }
        else
        {
            int j = n;
            while (a[i] > a[j])
                j--;
            swap(a[i], a[j]);
            reverse(a + i + 1, a + n + 1);
            for (int c = 1; c < n + 1; c++)
                cout << a[c] << ' ';
            cout << endl;
        }
    }

    return 0;
}