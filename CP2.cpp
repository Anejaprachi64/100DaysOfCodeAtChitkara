#include <iostream>
using namespace std;

int main() {
    int a,b,t,i=1;
    cin>>t;
    while(i<t+1){
        cin>>a>>b;
        i=i+1;
        if(a<=b){
            cout<<a<<endl;
        }
        else{
            cout<<b<<endl;
        }
}
}
