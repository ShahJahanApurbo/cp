#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back

bool possible(vector<ll> a, ll n, ll c, ll mid)
{
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        a[i] += 2 * mid;
        sum += a[i] * a[i];
        if (sum > c)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll low = 0, high = 1e9, mid, ans = 0;
        while (low <= high)
        {
            mid = low + (high - low) / 2;

            if (possible(a, n, c, mid))
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }
}