#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n, m;
    cin >> n >> m;

    string s;
    s.reserve(n);
    for (int i = 0; i < m; i++)
    {
        string q;
        cin >> q;
        s += q;
    }

    vector<int> groups;

    char currchar = s[0];
    int currcharc = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == currchar)
        {
            currcharc++;
        }
        else
        {
            groups.push_back(currcharc);
            currchar = s[i];
            currcharc = 1;
        }
    }

    groups.push_back(currcharc);

    int ans = groups[0];

    groups.erase(groups.begin());

    sort(groups.begin(), groups.end(), greater<>());

    int limit = min((int)groups.size(), m - 1);
    for (int i = 0; i < limit; i++)
    {
        ans += groups[i];
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << '\n';
    }
}