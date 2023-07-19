#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p,m,v;
	    cin>>p>>m>>v;
	    int dis= m-(p-1);
	    int m_dis = dis*v;
	    cout<<m_dis<<endl;
	}
	return 0;
}
