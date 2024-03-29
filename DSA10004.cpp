#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, k;
const ll mod = 1e9 + 7;
const int mxN = 1001;
vector<int> adj[1001];
int V, E;
int deg[mxN];

void solve()
{
    for (int i = 1; i <= V; ++i)
    {
        deg[i] = adj[i].size();
    }
    bool flag1 = true;
    bool flag2 = true;
    int cnt = 0;
    for (int i = 1; i <= V; ++i)
    {
        if (deg[i] & 1)
        {
            flag2 = false;
            cnt++;
        }
    }

    if (cnt != 0 && cnt != 2)
    {
        flag1 = false;
    }
    if (flag2)
    {
        cout << 2 << '\n';
    }
    else if (flag1)
    {
        cout << 1 << '\n';
    }
    else
        cout << 0 << '\n';
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
        memset(deg, 0, sizeof(deg));
        memset(adj, {}, sizeof(adj));
        cin >> V >> E;
        for (int i = 0; i < E; ++i)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        solve();
    }
    return 0;
}
