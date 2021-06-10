#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << '=' << x << endl
#define vll vector<ll>
#define pb push_back
#define F first
#define S second
#define pll pair<ll, ll>
#define vpll vector<pll>

void solve()
{
    ll a, b, k, af = 0, bf = 0, i = 2;
    cin >> a >> b >> k;
    int n = a;
    while (n != 0)
    {
        if (n % i == 0)
        {
            af ++;
            n /= i;
        }
        else
            i++;
    }
    n = b;
    i = 2;
    while (n != 0)
    {
        if (n % i == 0)
        {
            bf ++;
            n /= i;
        }
        else
            i++;
    }

    int f = af + bf;
    deb(f);
    if (a == 1 && b == 1)
        cout << "NO\n";

    else if (a == b && k % 2 != 0)
        cout << "NO\n";
    else
    {
        if (k <= f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}