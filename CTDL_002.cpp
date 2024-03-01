#include <bits/stdc++.h>
using namespace std;

int n, k, c;
int X[1000], Value[1000];

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        X[i] = j;
        if (i == n)
        {
            int s = 0;
            for (int i = 1; i <= n; i++)
            {
                s = s + X[i] * Value[i];
            }

            if (s == k)
            {
                c++;
                for (int i = 1; i <= n; i++)
                {
                    if (Value[i] * X[i])
                        cout << Value[i] << " ";
                }
                cout << endl;
            }
        }
        else
            Try(i + 1);
    }
}

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> Value[i];
    Try(1);
    cout << c;
    return 0;
}