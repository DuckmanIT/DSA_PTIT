#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Point
{
public:
    double x;
    double y;
    Point() {}
    Point(double x, double y) : x(x), y(y) {}
};

class Edge
{
public:
    int u;
    int v;
    double w;
    Edge() {}
    Edge(int u, int v, double w) : u(u), v(v), w(w) {}
};

double dis(Point p1, Point p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

const ll mod = 1e9 + 7;
const int mxN = 1001;
int par[mxN];
int sz[mxN];

vector<Edge> edges;
int n;

int Find(int x)
{
    if (par[x] == x)
        return x;
    return par[x] = Find(par[x]);
}

bool Union(int x, int y)
{
    x = Find(x);
    y = Find(y);
    if (x == y)
        return false;
    if (sz[x] < sz[y])
        swap(x, y);
    par[y] = x;
    sz[x] += sz[y];
    return true;
}

void solve()
{

    for (int i = 1; i <= n; ++i)
    {
        par[i] = i;
        sz[i] = 1;
    }

    sort(edges.begin(), edges.end(), [](Edge &e1, Edge &e2)
         { return e1.w < e2.w; });

    int cnt = 0;
    double res = 0;
    for (int i = 0; i < edges.size(); ++i)
    {

        if (cnt == n - 1)
            break;
        if (Union(edges[i].u, edges[i].v))
        {
            ++cnt;
            res += edges[i].w;
        }
    }
    cout << fixed << setprecision(6) << res << '\n';
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cerr.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        cerr << "#Test " << t << ":\n";
        edges.resize(0);
        memset(par, 0, sizeof(par));
        memset(sz, 0, sizeof(sz));
        cin >> n;
        vector<Point> p(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> p[i].x >> p[i].y;
        }
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                Edge e(i + 1, j + 1, dis(p[i], p[j]));
                edges.push_back(e);
            }
        }
        solve();
    }
    return 0;
}
