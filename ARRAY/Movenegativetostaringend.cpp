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

void displayarr(int arr[], int n)
{
    fo(i, n)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[] = {12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr) / sizeof(arr[0]);


    //MY OWN APPROACH T.C O(n) Space COmplexity O(1)
    int np = 0, pp = 0;
    while (pp != n)
    {
        if (arr[pp] < 0)
        {
            swap(arr[np], arr[pp]);
            np++;
        }

        pp++;
    }



    displayarr(arr,n);
    return 0;
}