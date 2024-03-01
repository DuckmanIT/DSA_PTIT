#include <bits/stdc++.h>
using namespace std;
int n, k, a[1000];
void sinh()
{
    vector<int> v;
    for (int i = 1; i <= k; i++)
    {
        v.push_back(a[i]);
    }
    int i = k;
    int check = 0;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        check = k;
    }
    else
    {
        int dem = 0;
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
        for (int j = i; j <= k; j++)
        {
            for (int m = i - 1; m < k; m++)
            {
                if (a[j] == v[m])
                    dem++;
            }
        }
        check = k - i + 1 - dem;
    }
    cout << check << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        sinh();
    }
}