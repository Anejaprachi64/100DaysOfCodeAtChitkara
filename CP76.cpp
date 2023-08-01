/*
dedication is the powerful weapon for success
never lose the hope
use the time well make your future bright
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
class surya
{
    public:
    ll l,c;
    void vij()
    {
        cin>>l>>c;
        ll k=abs(l-c);
        if(k%2==0)cout<<"yes";
        else cout<<"no";
        cout<<endl;
    }
};
int main()
{
    int h;
    cin>>h;
    surya s;
    while(h--)
    {
        s.vij();
    }
}
