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
        vector<int> heights(n);
        for (int i = 0; i < n; i++)
        {
            cin >> heights[i];
        }

        cout << *max_element(heights.begin(), heights.end()) - *min_element(heights.begin(), heights.end()) + 1 << '\n';
    }
}