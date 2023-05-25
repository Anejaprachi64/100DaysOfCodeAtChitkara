#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    float a,b,c,d;
	    cin >> a>>b>>c>>d;
	    float res1,res2;
	    res1 = (a*a)/(c*c*c);
	    res2 = (b*b)/(d*d*d);
	    if(res1==res2) cout << "Yes" << endl;
	    else cout << "No" << endl;
	}
	return 0;
}
