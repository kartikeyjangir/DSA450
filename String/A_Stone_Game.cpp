#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    auto indexmin = min_element(v.begin(), v.end());
    int imin1 = indexmin - v.begin()+1;
    int imin2=v.end()-indexmin;
int imin=min(imin1,imin2);
    auto indexmax = max_element(v.begin(), v.end());
    int imax1 = indexmax - v.begin()+1;
    int imax2=v.end()-indexmax;
    int imax=min(imax1,imax2);

    int a=max(imin1,imax1);
    int b=max(imin2,imax2);
    int c=imin1+imax2;
    int d=imin2+imax1;

    int ans=min(a,b);
    ans=min(ans,c);
    ans=min(ans,d);

    cout<<ans<<endl;


}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}