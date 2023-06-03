#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
// #include <stdlib.h>
// #include <math.h>
using namespace std;

// initial solution
int main()
{
    int testcase;
    cin >> testcase;
    for (int m = 0; m < testcase; m++)
    {
        int n, ans = 0, max = 0;// ans is for temporary streak count, max is for maxm streak count achieved,ans can become 0,max can not
        cin >> n;
        int A[n], B[n];
        for (int i = 0; i < n; i++)
        {
            cin>>A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>B[i];
        }
        

        for (int i = 0; i < n; i++)// checking loop
        {
            if (A[i] > 0 && B[i] > 0)// both sent at least one snap to each other
            {
                ans++;
                if (ans > max)
                {
                    max = ans;
                }
            }
            else if (A[i] == 0 || B[i] == 0)// one of them didnt send any snap, breaking the streak
            {
                ans = 0;
            }
        }
        cout << max << endl;
    }
}
