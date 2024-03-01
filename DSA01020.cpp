/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int check = 0;
        string s;
        cin >> s;
        for (int i = s.length() - 1; i >= 0; i--)
            if (s[i] == '1')
            {
                check = 1;
                s[i] = '0';
                for (int j = i + 1; j < s.length(); j++)
                {
                    s[j] = '1';
                }
                break;
            }
        if (check)
            cout << s << endl;
        else
        {
            for (int i = 0; i < s.length(); i++)
                cout << 1;
            cout << endl;
        }
    }

    return 0;
}