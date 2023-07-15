#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int A,B,C;
	    cin>>A>>B>>C;
	    if((A==0 && B==1) || (A==1 && B==0))
	    {
	        cout<<"1"<<endl;
	    }
	    else if((A==0 && C==1) || (A==1 && C==0))
	    {
	        cout<<"1"<<endl;
	    }
	    else
	    {
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
