/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 20th January 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/22/A

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
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    set<int> s;
    
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    
    for(auto &it:s)
    {
        v.push_back(it);
    }
    sort(v.begin(),v.end());
    if(s.size()>1)
        cout << v[1] << endl;
    else if(s.size()==1)
        cout << "NO" << endl;
    
    
}

int main() {
	

  solve();
	return 0;
}
