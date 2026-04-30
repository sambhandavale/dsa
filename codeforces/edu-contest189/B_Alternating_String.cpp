#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool can_fix(const string &s, const string &target)
{
    int n = s.length();
    int L = -1, R = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != target[i])
        {
            if (L == -1)
                L = i;
            R = i;
        }
    }

    if (L == -1)
        return true;

    string sub = s.substr(L, R - L + 1);
    string goal = target.substr(L, R - L + 1);

    string rev = sub;
    reverse(rev.begin(), rev.end());
    if (rev == goal)
        return true;

    for (char &c : rev)
        c = (c == 'a' ? 'b' : 'a');
    if (rev == goal)
        return true;

    return false;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.length();

    string t1 = "", t2 = "";
    for (int i = 0; i < n; i++)
    {
        t1 += (i % 2 == 0 ? 'a' : 'b');
        t2 += (i % 2 == 0 ? 'b' : 'a');
    }

    cout << (can_fix(s, t1) || can_fix(s, t2) ? "YES" : "NO") << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}