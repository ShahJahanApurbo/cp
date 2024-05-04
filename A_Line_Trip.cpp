#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int prev = 0, ans = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ans = max(ans, x - prev);
            prev = x;
        }

        ans = max(ans, 2 * (k - prev));

        cout << ans << endl;
    }
}