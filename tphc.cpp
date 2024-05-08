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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    if (k == 2)
    {
        cout << a[n - 1] - a[0];
    }
    else if (k % 2 == 0)
    {
        cout << a[n - 1] - a[0];
    }
    else
    {
        cout << a[n - 1] - a[0];
    }
}