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

ll N = 1e5;
vector<bool> visited(N, false);
vector<int> parent;
int ansEdge;
int ansNode;
int edge = 0;
int node = 0;

void solve(int prime[])
{
    int n, m;
    cin >> n >> m;

    cout << min(min(n, m), (n + m) / 4) << endl;
}

int main()
{
    speed();
    // file();

    int prime[N];
    // int k = 0;
    // for (int i = 0; i < N; i++)
    // {
    //     if (isPrime(i))
    //     {
    //         prime[k++] = i;
    //     }
    // }

    ll t = 1;
    cin >> t;

    while (t--)
        solve(prime);
    return 0;
}