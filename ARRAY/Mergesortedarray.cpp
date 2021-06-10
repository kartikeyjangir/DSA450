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

void displayarr(int arr[], int n)
{
    fo(i, n)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int a[] = {1, 3, 5, 7};
int b[] = {0, 2, 6, 8, 9};
int n=sizeof(a)/sizeof(int);
int m=sizeof(b)/sizeof(int);

//METHOD 1.  make new array of size n+m and sort that and insert in a and  b back 
//T.C is O(n+m(log(n+m)) space complexity O(n+m)
// int c[n+m];
// for(int i=0;i<n;i++)
// c[i]=a[i];
// for(int i=0;i<m;i++)
// c[n+i]=b[i];

// sort(c,c+n+m);

// for(int i=0;i<n;i++)
// a[i]=c[i];
// for(int i=0;i<m;i++)
// b[i]=c[n+i];




//Method 2. with constant space complexity O(1) and T.C O(n*mlog(m))
// int i=0,j=0;
//   if(n<m)
// 	  { while(i<n){
// 	       if(a[i]>b[j])
// 	       {
// 	           swap(a[i],b[j]);
// 	           i++;
// 	       sort(b,b+m);
// 	       }
// 	       else{
// 	           i++;
// 	           j++;
// 	       }
	       
// 	   }}
        
//         else {
//             while(j<m){
//                 if(b[j]>a[i]){
//                     swap(a[i],b[j]);
// 	           j++;
// 	       sort(a,a+n); 
//                 }
//             }
//         }



//Method 3 Gap Method space compelixity O(1) and T.C is O((n+m)*(log(n+m)))
int gap=ceil((n+m)/2);
while(gap!=0)
{
    for(int i=0;i+gap<n+m;i++){
        if()
    }
}






displayarr(a,n);
displayarr(b,m);


return 0;
}