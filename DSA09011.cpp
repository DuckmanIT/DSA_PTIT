#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll mod = 1e9 + 7;
const int mxN = 1001;
vector<int> adj[mxN];
bool visited[mxN];
int V, E, S, T;
int n, m;
int par[mxN];
int mat[mxN][mxN];
int dx[8] = {1, 0, 0, -1, 1, 1, -1, -1};
int dy[8] = {0, 1, -1, 0, 1, -1, 1, -1};

void dfs(int x, int y)
{
    mat[x][y] = 0;
    for (int i = 0; i < 8; ++i)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx >= 0 && yy >= 0 && xx < n && yy < m && mat[xx][yy] == 1)
            dfs(xx, yy);
    }
}

void solve()
{
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (mat[i][j] == 1)
            {
                dfs(i, j);
                ++cnt;
            }
        }
    }
    cout << cnt << '\n';
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
        memset(mat, 0, sizeof(mat));
        cin >> n >> m;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> mat[i][j];
            }
        }
        solve();
    }
    return 0;
}
