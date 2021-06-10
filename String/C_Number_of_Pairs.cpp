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
    ll n, l, r;
    cin >> n >> l >> r;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

        ll count=0;
        for(int i=0;i<n-1;i++){
            if(a[i]<=r)
           { for(int j=i+1;j<n;j++){
                ll num=a[i]+a[j];
                if(num>= l && num<=r)
                count++;
            }}
        }

        cout<<count<<endl;
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