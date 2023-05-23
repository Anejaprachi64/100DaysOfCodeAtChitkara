include <iostream>
using namespace std;

int main() {
  int tests;
	cin>>tests;
	while(tests--)
	{
	    int Limak,Bob;
	    cin>>Limak>>Bob;
	    for(int i = 1; i < 1000; i++)
	    {
	        if(i%2 != 0)
	        {
	            Limak-=i;
	            if(Limak<0){
	                cout<<"Bob"<<endl;
	                break;
	            }
	        }
	        else
	        {
	            Bob-=i;
	            if(Bob<0){
	                cout<<"Limak"<<endl;
	                break;
	            }
	        }
	    }
	}
	
	
    
	// your code goes here
	return 0;
}
