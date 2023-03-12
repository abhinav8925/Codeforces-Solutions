/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 12th March 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1579/A

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
    
    string s;
    cin>>s;
    int n=s.size();
    int cnta=0,cntb=0,cntc=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
            cnta++;
        else if(s[i]=='B')
            cntb++;
        else if(s[i]=='C')
            cntc++;
    }
    if(cntb==(cnta+cntc))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
