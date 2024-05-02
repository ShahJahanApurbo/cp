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
        ll n;
        cin >> n;
        vector<ll> a(n + 1, 0), b(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            if (x <= n)
                a[x]++;
        }

        for (ll i = 1; i <= n; i++)
        {
            for (ll j = i; j <= n; j += i)
            {
                b[j] += a[i];
            }
        }

        cout << *max_element(b.begin(), b.end()) << endl;
    }
}