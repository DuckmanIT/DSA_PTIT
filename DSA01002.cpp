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
        int n, k;
        cin >> n >> k;
        int a[k];
        for (int i = 0; i < k; i++)
            cin >> a[i];
        int check = 0;
        for (int i = k - 1; i >= 0; i--)
        {
            if (a[i] < n - k + i + 1)
            {
                check = 1;
                a[i]++;
                int c = 1;
                for (int j = i + 1; j < k; j++)
                {
                    a[j] = a[i] + c;
                    c++;
                }
                break;
            }
        }
        if (check == 1)
        {
            for (int i = 0; i < k; i++)
                cout << a[i] << ' ';
            cout << endl;
        }
        else
        {
            for (int i = 0; i < k; i++)
                cout << i + 1 << ' ';
            cout << endl;
        }
    }

    return 0;
}