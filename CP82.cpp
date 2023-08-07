#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,h,x;
	cin>>n>>h>>x;
	int count = 0;
	while(n--){
	    int t;
	    cin>>t;
	    if(t>= h-x) count++;
	}
	if(count) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
