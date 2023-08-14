#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    while(n!=50){
	        if(n>50){
	            n = n-3;
	            count++;
	        }else{
	            n = n+2;
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
