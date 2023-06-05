include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,c=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    map<int,int> m;
	    for(int i=0;i<n;i++){
	        m[a[i]]++;
	    }
	    for(auto &i:m){
	        if(i.second%2!=0){
	            c++;
	            break;
	    }
	    
	    }
	    if(c>0)cout<<"NO"<<endl;
	    else cout<<"YES"<<endl;
	}
	return 0;

}
