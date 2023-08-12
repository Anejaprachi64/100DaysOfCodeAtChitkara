#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        long n;
       cin>>n;
       vi v(n);
       for(int i=0;i<n;i++)
       {
        cin>>v[i];
       }
       int gmin=0;
       int gmax=0;
       int diff=0;
    
        gmin=v[0];
        for(int i=0;i<n;i++)
        {
            if(gmin<v[i])
            {
                
                diff=max(diff,v[i]-gmin);
            }
            else
                gmin=v[i];
        }
        
       if(diff==0)
        cout<<"UNFIT"<<endl;
       else
        cout<<diff<<endl;
    }
    
    return 0;
}
