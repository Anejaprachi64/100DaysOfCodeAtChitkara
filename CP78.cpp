#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define MOD 1000000007


void solve() {
    int n=0;
    cin>>n;
    vector<int> v(n);
    int sum = 0;
    
    
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum += v[i];
    }
    if(n==1){
        cout<<1<<"\n";
        return;
    }
    sort(v.begin(),v.end());
    
    vector<int> pref(n),prefSum(n);
    vector<int> suff(n),suffSum(n);
    
    for(int i=0;i<n;i++){
        if(i==0) pref[i] = v[i];
        else pref[i] = __gcd(pref[i-1],v[i]);
    }
    
    for(int i=n-1;i>=0;i--){
        if(i==n-1) suff[i] = v[i];
        else suff[i] = __gcd(suff[i+1],v[i]);
    }
    
    int ans = LLONG_MAX;
    
    for(int i=0;i<n;i++){
        if(i==0){
            int curr = suff[i+1];
            ans = min(ans,((sum-v[i])/curr)+1);
        }
        else if(i==n-1){
            int curr = pref[i-1];
            ans = min(ans,((sum-v[i])/curr)+1);
        }
        else{
            int curr = __gcd(suff[i+1],pref[i-1]);
            ans = min(ans,((sum-v[i])/curr)+1);
        }
    }
    
    cout<<ans<<"\n";

    
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
//        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}
