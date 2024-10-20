#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#include "apurbo.h"
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

vector<ll> getResult(ll n)
{
    vector<ll> result;
    while (n > 0)
    {
        if (!(n & 1))
        {
            result.push_back(0);
            n = n / 2;
        }
        else
        {
            if (n % 4 == 1)
            {
                result.push_back(1);
                n = (n - 1) / 2;
            }
            else
            {
                result.push_back(-1);
                n = (n + 1) / 2;
            }
        }
    }
    return result;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> result = getResult(n);

    cout << result.size() << endl;
    for (auto i : result)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    fastio();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
