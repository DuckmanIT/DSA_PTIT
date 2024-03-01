#include <bits/stdc++.h>
using namespace std;

int n, k;
int X[1000], Value[1000];
bool flag = false;
void Try(int i)
{
    for (int j = 1; j >= 0; j--)
    {
        X[i] = j;
        if (i == n)
        {
            int s = 0;
            int check = 0;
            int count = 0;
            bool sign = false;
            for (int i = 1; i <= n; i++)
            {
                check = s;
                if (sign == false)
                    if (X[i] == 1)
                        sign = true;
                s = s + X[i] * Value[i];
                if (s > check)
                    count++;
            }

            if (s == k && sign == true)
            {
                flag = true;
                int c = 0;
                cout << "[";
                for (int i = 1; i <= n; i++)
                {
                    if (Value[i] * X[i])
                        cout << Value[i];
                    if (c < count - 1 && Value[i] * X[i] != 0)
                    {
                        c++;
                        cout << " ";
                    }
                }
                cout << "] ";
            }
        }
        else
            Try(i + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        flag = false;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> Value[i];
        sort(Value, Value + n + 1);
        // for (int i = 1; i <= n; i++)
        //     cout << Value[i] << " ";
        Try(1);
        if (!flag)
        {
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}