#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, k;
const ll mod = 1e9 + 7;
vector<vector<ll>> a;
vector<vector<ll>> Mul(vector<vector<ll>> &v1, vector<vector<ll>> &v2)
{

    vector<vector<ll>> res(n, vector<ll>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < n; ++k)
            {
                res[i][j] += v1[i][k] * v2[k][j];
                res[i][j] %= mod;
            }
        }
    }
    return res;
}

vector<vector<ll>> Pow()
{
    vector<vector<ll>> res(n, vector<ll>(n));
    for (int i = 0; i < n; ++i)
    {
        res[i][i] = 1;
    }
    while (k)
    {
        if (k & 1)
        {
            res = Mul(res, a);
        }
        a = Mul(a, a);
        k >>= 1;
    }
    return res;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        a.resize(0, vector<ll>(0));
        cin >> n >> k;
        a.resize(n, vector<ll>(n));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> a[i][j];
            }
        }
        vector<vector<ll>> res = Pow();

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cout << res[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}
