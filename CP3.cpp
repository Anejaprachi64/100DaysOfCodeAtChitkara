#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
    int A,B;
    cin>>A>>B;
    A=A*100;
    B=B*100;
    A=A/10;
    B=B/20;
    if(A==B)
        cout<<"Any"<<endl;
    else if(A<B)
        cout<<"Second"<<endl;
    else
        cout<<"First"<<endl;
    }
    return 0;
    }
    
