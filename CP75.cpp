#include <iostream>
#include <bits/stdc++.h>
#include <string>
// #include <stdlib.h>
#include <math.h>
using namespace std;



int main()
{
    int testcase;
    cin >> testcase;
    for (int testcase_variable = 0; testcase_variable < testcase; testcase_variable++)
    {
        unsigned long long int x, y;
        cin >> x >> y;
        
        if ( x*x == 2 * y)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
