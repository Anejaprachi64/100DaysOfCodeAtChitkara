#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int arr[4];
	    for(int i=0;i<4;i++){
	       cin>>arr[i];  
	    }
	    
	   
	    if(arr[1]>arr[0]){
	        arr[0]+=arr[2];
	    }else{
	        arr[1]+=arr[2];
	    }
	    if(arr[1]>arr[0]){
	        arr[0]+=arr[3];
	    }else{
	        arr[1]+=arr[3];
	    }
	    if(arr[1]>arr[0]){
	        cout<<"S"<<endl;
	    }else{
	        cout<<"N"<<endl;
	    }
	    
	}
	return 0;
}
