#include <iostream>
using namespace std;

int main() {
	int t, team1[5], team2[5], shots1, shots2;
	cin>>t;
	while(t--){
	    shots1 = 0;
	    shots2 = 0;
	    for(int i = 0; i < 5; i++){
	        cin>>team1[i]>>team2[i];
	        if(team1[i] == 1){
	            shots1++;
	        }
	        if(team2[i] == 1){
	            shots2++;
	        }
	    }
	    if(shots1 > shots2){
	        cout<<1<<endl;
	    }
	    else if(shots2 > shots1){
	        cout<<2<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
