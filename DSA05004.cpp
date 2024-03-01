
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll mod = 1e9 + 7;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    vector<int> dp(n);
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
    {
        dp[i] = 1;
        for (int j = 0; j < i; ++j)
        {
            if (a[j] < a[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int res = 1;
    for (int i = 0; i < n; ++i)
    {
        res = max(res, dp[i]);
    }
    cout << res;
    return 0;
}
