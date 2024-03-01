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
        string s;
        cin >> s;
        int check = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                check = 1;
                for (int j = i; j < s.length(); j++)
                {
                    if (s[j] == '0')
                        s[j] = '1';
                    else if (s[j] = '1')
                        s[j] = '0';
                }
                break;
            }
        }
        if (check == 0)
        {
            for (int i = 0; i < s.length(); i++)
                cout << 0;
            cout << endl;
        }
        else
            cout << s << endl;
    }

    return 0;
}