#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define for0(n) for (int i = 0; i < n; i++)
#define for1(n) for (int i = 1; i <= n; i++)
#define all(x) (x).begin(), (x).end()
#define gsize(x) (int)((x).size())
void speed()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
}
void file()
{
#ifndef a
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
bool isPrime(ll n)
{
    if (n == 2)
        return true;
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

//--------------------------###--------------------------------//
// solution here
// ll N= 9;

ll N = 1e6;
vector<bool> visited(N, false);
vector<int> parent;
int ansEdge;
int ansNode;
int edge = 0;
int node = 0;

void solve(vector<ll> prime)
{
    int n, m;
    cin >> n >> m;
    int a[n][m], ans[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x = lower_bound(prime.begin(), prime.end(), a[i][j]) - prime.begin();

            ans[i][j] = prime[x] - a[i][j];
            // for (int k = 0;; k++)
            // {
            //     if (a[i][j] > prime[k])
            //         continue;

            //     if (a[i][j] == prime[k])
            //     {
            //         ans[i][j] = 0;
            //         break;
            //     }
            //     else if (a[i][j] < prime[k])
            //     {
            //         ans[i][j] = prime[k] - a[i][j];
            //         break;
            //     }
            // }
        }
    }
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += ans[i][j];
        }
        if (sum < min)
        {
            min = sum;
        }
    }
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += ans[j][i];
        }
        if (sum < min)
        {
            min = sum;
        }
    }
    cout << min << endl;
}

int main()
{
    speed();
    // file();

    // int prime[1000000];
    vector<ll> prime;
    for (int i = 0; i < 1000000; i++)
    {
        if (isPrime(i))
        {
            // prime[k++] = i;
            prime.push_back(i);
        }
    }

    ll t = 1;
    // cin >> t;

    while (t--)
        solve(prime);
    return 0;
}