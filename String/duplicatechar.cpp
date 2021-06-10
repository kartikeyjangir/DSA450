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

void solve(){

}
int main(){
ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
string s;cin>>s;

//Method 1. Hashing space complexity is O(no_of_char) that is 256 charactter as all characters might not be present in the word so memory will get wasted
//T.C O(size of string)
// int count[256]={0};
// for(int i=0;i<s.size();i++){
//     count[(int)s[i]]++;
// }

// for(int i=0;i<256;i++){
//     if(count[i]>1)
//     cout<<(char)i<<" ";
// }



//Method 2. using map as no wastage of memory 
unordered_map<char,int> m;
for(int i=0;i<s.size();i++){
    if()
    m.insert({s[i],1})
}

for(int i=0;i<256;i++){
    if(count[i]>1)
    cout<<(char)i<<" ";
}
cout<<endl;

return 0;
}