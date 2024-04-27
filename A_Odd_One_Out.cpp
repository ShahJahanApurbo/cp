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
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int c1 = 0, c2 = 0, c3 = 0;

    for (int i = 0; i < 3; i++)
    {
        if (s1[i] == 'A')
            c1++;
        if (s1[i] == 'B')
            c2++;
        if (s1[i] == 'C')
            c3++;
        if (s2[i] == 'A')
            c1++;
        if (s2[i] == 'B')
            c2++;
        if (s2[i] == 'C')
            c3++;
        if (s3[i] == 'A')
            c1++;
        if (s3[i] == 'B')
            c2++;
        if (s3[i] == 'C')
            c3++;
    }
    if (c1 < c2 && c1 < c3)
    {
        cout << 'A' << endl;
    }
    else if (c2 < c1 && c2 < c3)
    {
        cout << 'B' << endl;
    }
    else
    {
        cout << 'C' << endl;
    }
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