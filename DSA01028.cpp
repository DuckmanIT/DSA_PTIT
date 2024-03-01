#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[1001];
vector<int> b;
void sinh(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            for (int c = 1; c <= k; c++)
                cout << b[a[c] - 1] << ' ';
            cout << endl;
        }
        else
            sinh(i + 1);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    memset(a, 0, sizeof(a));
    cin >> n >> k;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (int i : s)
    {
        b.push_back(i);
    }
    n = b.size();
    sinh(1);

    return 0;
}