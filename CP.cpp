#pragma comment(linker, "/STACK:102400000,102400000")
#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define n 100001
const int MAXN = 1e5 + 5;
signed main() {
    int tt;
    cin >> tt;
    while (tt--)
    {
        int N;
        cin >> N;
        
        int prev, curr, count = 0;
        cin >> prev;
        
        bool mismatch = false;
        for (int i = 1; i < N; i++) 
        {
            cin >> curr;
            if (prev != curr) 
            {
                if (mismatch) 
                {
                    count++;
                } 
                else 
                {
                    count += 2;
                    mismatch = true;
                }
            } 
            else
            {
                mismatch = false;
            }
            prev = curr;
        }
        cout << count << "\n";
    }
    return 0;
}

