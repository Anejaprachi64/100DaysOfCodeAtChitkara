#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,i,n,t,c,d,e,f,g;
	cin>>t;
	while(t--)
	{
	  cin>>n>>a>>b>>c;
	  d=max(a,b);
	  e=max(d,c);
	  f=min(a,b);
	  g=min(c,f);
	  cout<<g*(n-1)+a+b+c-e-g<<endl;
	}
	return 0;
}
