#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        //Code here
        int n; cin>>n;
        int arr[n];
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){ if(arr[i]==0){ count=0; break;}
            else if(arr[i]<0) count++;}
        cout<<count%2<<endl;
    }
    return 0;
}
