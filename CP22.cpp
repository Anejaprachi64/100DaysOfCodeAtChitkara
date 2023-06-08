#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll c=0,i,l;
        string s;
        cin>>l>>s;
        for(i=0;i<l/2;i++)
        {
            if(s[i]==s[l/2+i])
            c++;
        }
        if(c==l/2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
