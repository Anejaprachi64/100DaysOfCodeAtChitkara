#include <iostream>
using namespace std;

// n candidate appeared and each of them faced m problems.
// unsolved -"U" Solved partially - "P"  Solved Completely- "F"
// for selection x-1 problem and y or more problems partially.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    string str1;
	    int x,y;
	    cin>>x>>y;
	    
	    
	    while(n--)
	    {
	        string str;
	        cin>>str;
	        int f=0,p=0;
	       
	        for(int i=0;i<str.length();i++)
	        {
	            if(str[i]=='F')
	            {
	                f++;
	            }
	            else if(str[i]=='P')
	            {
	                p++;
	            }
	        }
	        
	        if(f>=x || ( f == (x-1) && p >= y ))
	        {
	           // str1=str1+'1';
	           cout<<1;
	        }
	        else
	        {
	           // str1=str1+'0';
	           cout<<0;
	        }
	        
	    }
	    cout<<endl;
	}
	return 0;
}
