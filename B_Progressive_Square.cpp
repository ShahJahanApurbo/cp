#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define pb push_back

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, c, d;
        cin >> n >> c >> d;
        vector<ll> a;
        for (ll i = 0; i < n * n; i++)
        {
            ll x;
            cin >> x;
            a.pb(x);
        }
        sort(a.begin(), a.end());
        vector<ll> v;
        ll x = a[0];
        for (ll j = 1; j <= n; j++)
        {

            for (ll i = 0; i < n; i++)
            {
                v.pb(x + i * c);
            }
            x = x + d;
        }

        sort(v.begin(), v.end());

        for (ll i = 0; i < n * n; i++)
        {
            if (a[i] != v[i])
            {
                cout << "NO" << endl;
                break;
            }
            if (i == n * n - 1)
                cout << "YES" << endl;
        }
    }
}