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
    int f = 1;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        if (n < k)
        {
            cout << "Case #" << f << ": " << 1 << endl;
            f++;
            continue;
        }

        ll cnt = 0;

        ll sum = 2 * n - 1;

        cnt = sum / k;

        cout << "Case #" << f << ": " << cnt + 1 << endl;
        f++;
    }
}