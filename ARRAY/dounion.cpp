#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i,n) for (int i=0;i<n;i++)
#define deb(x) cout<<#x<<'='<<x<<endl
#define vll vector<ll>
#define pb push_back
#define F first
#define S second
#define pll pair<ll,ll>
#define vpll vector<pll>

 int doUnion(int a[], int n, int b[], int m)  {
        unordered_set<int> s;
       for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            s.insert(b[i]);
        }
        
        return s.size();
    }
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int a[]={1,2,3,4,5,6,7};
int b[]={1,2,3,4};
int n=sizeof(a)/sizeof(int);
int m=sizeof(b)/sizeof(int);

cout<<doUnion(a,n,b,m)<<endl;

return 0;
}