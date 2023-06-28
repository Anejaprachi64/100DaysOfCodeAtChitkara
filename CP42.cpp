#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long a,b,i,n,t;
	cin>>t;
	while(t--)
	{
	  cin>>n>>a;
	  if(n%a==0)
	  cout<<n/a<<endl;
	  else
	  cout<<"-1"<<endl;
	}
	return 0;
}
