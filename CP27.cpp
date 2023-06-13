#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    {
	        if(n%4==0)
	        {
	            cout<<"off"<<endl;
	        }
	        else
	        {
	            cout<<"on"<<endl;
	        }
	    }
	    
	    else if(k==1)
	        if(n%4==0)
	        {
	            cout<<"on"<<endl;
	        }
	        else
	        {
	            cout<<"Ambiguous"<<endl;
	        }
	    }
	    
	    t--;
	}
	return 0;
}
