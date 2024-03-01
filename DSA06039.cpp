#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        int res = -1;
        unordered_set<int> s;
        for (int i = n - 1; ~i; --i)
        {
            if (s.find(a[i]) != s.end())
            {
                res = a[i];
            }
            s.insert(a[i]);
        }
        if (res == -1)
        {
            cout << "NO";
        }
        else
            cout << res;
        cout << '\n';
    }
    return 0;
}
