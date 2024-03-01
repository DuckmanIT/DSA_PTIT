/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;

int n, a[1001], check = 1;

void first()
{
    for (int i = 1; i <= n; i++)
        a[i] = i;
}

void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
        i--;
    if (i == 0)
    {
        check = 0;
    }
    else
    {
        int j = n;
        while (a[i] > a[j])
            j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
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
        first();
        while (check)
        {
            for (int i = 1; i <= n; i++)
                cout << a[i];
            cout << ' ';
            sinh();
        }
        check = 1;
        cout << endl;
    }

    return 0;
}