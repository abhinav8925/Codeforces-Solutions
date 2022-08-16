// Date -> 16th August 2022
// Code by -> Abhinav Anand

// Problem Link ->  https://codeforces.com/contest/1399/problem/B

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],b[n];
        ll min1=INT_MAX;
        ll min2=INT_MAX;
        for(ll i=1;i<=n;i++)   cin>>a[i];
        for(ll i=1;i<=n;i++)   cin>>b[i];
        ll cnt=0;
        for(ll i=1;i<=n;i++)
        {
            min1=min(min1,a[i]);
            min2=min(min2,b[i]);
        }
        for(ll i=1;i<=n;i++)
        {
            cnt=cnt+max((a[i]-min1),(b[i]-min2));
        }
        cout << cnt << endl;
    }
}