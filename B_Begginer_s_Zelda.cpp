#include<iostream>
#include<bits/stdc++.h>
#define pll = pair<ll, ll>
#define tlll = tuple<ll, ll, ll>
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define int long long
#define dis(x) cout<<x<<endl
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define sort(v) sort(v.begin(),v.end())
#define f(n) for(int i=0;i<n;i++)
#define ASST(x,y,z) assert(x >= y && x <= z)
#define ss second
#define rep(i,a,n) for(int i = (a); i <= (n); ++i)
#define sz(a) (int)(a.size())
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
const int N = 100100;
using namespace std;
int32_t main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    vector<int>degreee(n+1,0);
for(int i=0;i<n-1;i++){
    int x,y;
    cin>>x>>y;
    degreee[x]++;
    degreee[y]++;
}	
int ans=0;
for(int i=0;i<n;i++){
if(degreee[i]==1){
    ans++;
}
}

cout<<(ans+1)/2<<endl;
}
    return 0;
}