#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define for0(n) for (int i = 0; i < n; i++)
#define for1(n) for (int i = 1; i <= n; i++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n, 0);
        int odd = 0;
        ll sum = 0;
        ll mn = INT_MAX;
        for0(n)
        {
            ll x;
            cin >> x;
            // v[i] = x;
            if (x < 0)
                odd++;
            sum += abs(x);
            x = abs(x);
            mn = min(mn, x);
        }

        if (odd % 2 == 0)
        {
            cout << sum << endl;
        }
        else
        {
            cout << sum - 2 * mn << endl;
        }
    }
}