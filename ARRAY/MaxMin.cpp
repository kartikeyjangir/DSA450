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

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);

    int max = INT_MIN;
    int min = INT_MAX;

    //Method 1 T.C O(n)
    // fo(i, n)
    // {
    //     if (arr[i] > max)
    //         max = arr[i];
    //     if (arr[i] < min)
    //         min = arr[i];
    // }

    //Method 2 T.c O(n)
    min=*min_element(arr,arr+n);
    max=*max_element(arr,arr+n);

    

    deb(max);
    deb(min);
    return 0;
}