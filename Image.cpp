// Date -> 27th August 2022
// Code By -> Abhinav Anand

// Problem Link -> https://codeforces.com/contest/1721/problem/A



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<char,int> mp;
        char a,b,c,d;
        cin >> a >> b >> c >> d;
        mp[a]++,mp[b]++,mp[c]++,mp[d]++;
        cout << mp.size()-1 << endl;
    }
}