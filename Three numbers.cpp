// Date - 10th August 2022
// Code by - Abhinav Anand

// problem link
//  https://codeforces.com/problemset/problem/1699/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
            cout << 0 << " " << n/2 << " " << n/2 << endl;
        else
            cout << -1 << endl;
    }
}