#include <iostream>
using namespace std;

int main() {
    
	int tc; //tc for test cases
	cin>>tc; //tacking input for tc
	
	while(tc--){  
	    
	    int n,x;  //taking input for x and y
	    cin>>n>>x;
	    
	    int arr[n]; //
	    
	    int count=0; // counting for graterthen x
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i]; // tacking input and store in arr[]
	        
	        if(arr[i]>x){ //check if arr[i]>x theing count=count+1
	            count++;
	        }
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}
