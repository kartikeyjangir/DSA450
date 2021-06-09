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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[] = {-5, 4, 6, -3, 4, -1};
    int n = sizeof(arr) / sizeof(int);

    //Brute force approach T.C is O(n^2)
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            ans = max(sum, ans);
        }
    }

    cout << ans << endl;
    return 0;
}