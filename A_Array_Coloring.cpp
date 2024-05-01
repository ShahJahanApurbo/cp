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
        vector<ll> odd, even;
        int x;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            ll a;
            cin >> a;
            if (a & 1)
                odd.pb(a);
            else
                even.pb(a);
        }

        if (even.size() != 0 && odd.size() & 1)
            no;
        else if (even.size() == 0 && odd.size() & 1)
            no;
        else
            yes;
    }
}