#include <bits/stdc++.h>
using namespace std;

void paren(int n, string &s, int op, int cl, vector<string> result)
{
    if (cl > op)
        return;
    if (s.length() == n && op == n / 2 && cl == n / 2)
    {
        result.push_back(s);
        cout << "Found - " << s << '\n';
        return;
    }

    if (op != n / 2)
    {
        paren(n, s += '(', op + 1, cl, result);
        s.pop_back();
    }

    if (cl != n / 2)
    {
        paren(n, s += ')', op, cl + 1, result);
        s.pop_back();
    }
}

int main()
{
    int n = 3;
    string s = "";
    vector<string> result;
    paren(n * 2, s, 0, 0, result);
}