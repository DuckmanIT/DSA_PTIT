#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mxN = 1001;
const ll mod = 1e9 + 7;

bool visited[mxN];
vector<pair<int, int>> edges;
vector<int> adj[mxN];
void dfs(int s, int t, int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (u == s && v == t || u == t && v == s)
            continue;
        if (!visited[v])
            dfs(s, t, v);
    }
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
        memset(adj, {}, sizeof(adj));
        edges.resize(0);
        int V, E;
        cin >> V >> E;

        for (int i = 0; i < E; ++i)
        {
            pair<int, int> tmp;
            cin >> tmp.first >> tmp.second;
            edges.push_back(tmp);
            adj[tmp.first].push_back(tmp.second);
            adj[tmp.second].push_back(tmp.first);
        }
        for (auto e : edges)
        {
            int cnt = 0;
            memset(visited, false, sizeof(visited));
            for (int i = 1; i <= V; ++i)
            {
                if (!visited[i])
                {
                    dfs(e.first, e.second, i);
                    ++cnt;
                }
            }
            if (cnt >= 2)
            {
                cout << e.first << ' ' << e.second << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}
