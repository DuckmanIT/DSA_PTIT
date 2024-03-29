#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        stack<string> st;
        for (char c : s)
        {
            if (isOperator(c))
            {
                string op2 = st.top();
                st.pop();
                string op1 = st.top();
                st.pop();
                st.push("(" + op1 + string(1, c) + op2 + ")");
            }
            else
                st.push(string(1, c));
        }
        cout << st.top() << '\n';
    }
    return 0;
}
