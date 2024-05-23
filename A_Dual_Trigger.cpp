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
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#include "apurbo.h"
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            cnt++;
        }
    }
    cerr << "cnt: " << cnt << endl;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            for (int j = i + 2; j < n - 2; j++)
            {
                cerr << s[i] << " " << s[j] << endl;
                cerr << "before check   ";
                debug(s);
                if (s[j] == '0')
                {
                    s[i] = '1';
                    s[j] = '1';
                    cerr << s[i] << " " << s[j] << endl;
                    cerr << "after check    ";
                    debug(s);
                    break;
                }
                cerr << s[i] << " " << s[j] << endl;
                cerr << "after check    ";
                debug(s);
            }
    }
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            cnt++;
        }
    }
    if (cnt == 0)
    {
        cout << "YES" << nline;
    }
    else
    {
        cout << "NO" << nline;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
