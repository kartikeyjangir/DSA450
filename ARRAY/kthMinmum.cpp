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
        cout<< arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[] = {1, 23, 73,13, 41, 56, 73,  91};
    int n = sizeof(arr) / sizeof(int);

    int k,ans;cin>>k;


    //Mehthod 1. do sorting and then return the min arr[k-1] and max arr[n-k] element; T.C O(nlogn)

    //Method 2. using priortiy queue or min Heap T.C O(n+klogn)
    //For smallest element use max heap method
    // priority_queue<int,vector<int>> p;
    // for(auto &val : arr)
    //     p.push(val);

    // int i=1;
    // while(!p.empty()){
    //     if(i==k)
    //     {
    //         ans=p.top();
    //     }
    //     i++;
    //     p.pop();
    // }

    //For largest element use max heap method

    //  priority_queue<int,vector<int>,greater<int>> p;
    // for(auto &val : arr)
    //     p.push(val);

    // int i=1;
    // while(!p.empty()){
    //     if(i==k)
    //     {
    //         ans=p.top();
    //     }
    //     i++;
    //     p.pop();
    // }

    //Method 3. using Quicksort apply only when all elements are different 



    // Method 4. using STL T.C O(logn+n)
    map<int,int> m;
    for(auto &val:arr){
        m[val]++;
    }

    int feq=0;

    // maximum
    for(auto it=m.rbegin();it!=m.rend();it++)
    {
        feq+=it->second;
         if(feq>=k)
        {
            ans=it->first;
            break;
        }

    }

    // minimum
    for(auto &val:arr){
        feq+=m[val];
        if(feq>=k)
        {
            ans=val;
            break;
        }

    }

    cout<<"kth minimum element is "<<ans<<endl;

    return 0;
}