#include <bits/stdc++.h>
using namespace std;

int minimizeCost(int n, int k, vector<int> &h)
{
    vector<int> dp(n);
    for (int i = 1; i < n; i++)
    {
        int cost = INT_MAX;
        for (int j = 1; j <= k; j++)
        {
            if (i - j < 0)
                break;
            cost = min(cost, dp[i - j] + abs(h[i] - h[i - j]));
        }
        dp[i] = cost;
    }
    return dp[n - 1];
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << minimizeCost(n, k, arr) << '\n';

    return 0;
}