/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 22nd January 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1454/B

*/

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}


void solve()
{
    int n;
    cin>>n;
    int a[n];
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    bool ans=false;
    vector<int> v;
    for(auto &it:m)
    {
        if(it.second==1)
        {
            ans=true;
            break;
        }
    }
    if(ans)
    {
        for(auto &it:m)
        {
            if(it.second==1)
                v.push_back(it.first);
        }
        sort(v.begin(),v.end());

        for(int i=0;i<n;i++)
        {
            if(a[i]==v[0])
            {
                cout << i+1 << endl;
                return ;
            }
        }
    }
    else if(ans==false)
        cout << -1 << endl;
    
    
}

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
