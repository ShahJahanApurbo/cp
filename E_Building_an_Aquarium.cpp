#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define checkmate return 0
// #define yes                 cout<<"YES"<<endl
// #define no                  cout<<"NO"<<endl
#define vmax *max_element(v.begin(), v.end())
#define vmin *min_element(v.begin(), v.end())
#define nupur()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
const ll N = (ll) 1e6+5;
using namespace std;

ll factorial(ll n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    nupur();
    ll t;
    cin >> t;
    while (t--)
    {
        ll arr[N];
        set<ll> s;
        vector<ll> ans;
        ll ans1;
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            arr[x]++;
            s.insert(x);
        }

        
        
        
    }
}
