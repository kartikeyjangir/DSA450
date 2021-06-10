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
    ll n, sum = 0;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    ll count=0,required=sum/n;
    if(sum%n)
   { cout<<"-1"<<endl;
    return;}
    else{
        for(int i=0;i<n;i++)
        if(a[i]>required)
        count++;
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