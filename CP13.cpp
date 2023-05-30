#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    int z=1;
	    int n;
	    std::cin >> n;
	    std::vector<int> d(n);
	    for (int i = 0; i < n; i++) 
	        std::cin >> d[i];
	        
	        sort(d.begin(),d.end());
	    
	    for(int j=0;j<n-1;j++){
	        if(d[j]!=d[j+1])
	        z++;
	         
	        
	    }
	    std::cout << z << std::endl;
	    
	}
	return 0;
}
