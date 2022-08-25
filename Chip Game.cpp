// Date -> 25th August 2022
// Code By -> Abhinav Anand

// Problem Link -> https://codeforces.com/contest/1719/problem/A


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll k=a+b;
        if(k%2==0)
            cout << "Tonya" <<endl;
        else
            cout << "Burenka" << endl;
    }
}