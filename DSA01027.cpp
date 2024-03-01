#include <bits/stdc++.h>
using namespace std;

void sinh()
{
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    do
    {
        for (int i : v)
            cout << i << ' ';
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
    return 0;
}