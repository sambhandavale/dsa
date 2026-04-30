#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> div3;
        vector<int> div6;
        vector<int> div2;
        vector<int> rest;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 3 == 0 && arr[i] % 6 != 0)
            {
                div3.push_back(arr[i]);
            }
            else if (arr[i] % 6 == 0)
            {
                div6.push_back(arr[i]);
            }
            else if (arr[i] % 2 == 0)
            {
                div2.push_back(arr[i]);
            }
            else
                rest.push_back(arr[i]);
        }

        vector<int> ans;

        for (auto &i : div6)
        {
            ans.push_back(i);
        }

        for (auto &i : div2)
        {
            ans.push_back(i);
        }

        for (auto &i : rest)
        {
            ans.push_back(i);
        }

        for (auto &i : div3)
        {
            ans.push_back(i);
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << ' ';
        }

        cout << '\n';
    }
}