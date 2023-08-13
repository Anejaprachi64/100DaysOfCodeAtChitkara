#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin>>t;
	  while(t--){
	      int x,y;
	      cin>>x>>y;
	     int d=x-y;
	    if(x==y){
	       cout<<(2*x)-1<<endl;
	    }
	    else{
	        
	        if(y!=0){
	            int ans1=(2*y)+d;
	            cout<<ans1<<endl;
	        }
	        else{
	        cout<<x<<endl;
	        }
	    }
	  }
	return 0;
}
