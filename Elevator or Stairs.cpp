// Date - 12th December 2022
// Code by - Abhinav Anand

// problem link
//  https://codeforces.com/contest/1054/problem/A


#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        int x,y,z,t1,t2,t3;
        cin>>x>>y>>z>>t1>>t2>>t3;
        int ts= abs(y-x) * (t1);
        int te= abs(x-z) *t2 + (2*t3) + (abs(x-y)*t2) + t3;
        
        if(ts>=te)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    
}
