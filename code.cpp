#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        // Compute the GCD of a and b
        int gc = __gcd(a, b);

        // Normalize the array by taking modulo gc
        int mini = LONG_LONG_MAX;
        int maxi = LONG_LONG_MIN;
        for (int i = 0; i < n; ++i)
        {
            v[i] %= gc;
            mini = min(mini, v[i]);
            maxi = max(maxi, v[i]);
        }

        // The minimized range
        int ans = maxi - mini;
        cout << ans << '\n';
    }

    return 0;
}
