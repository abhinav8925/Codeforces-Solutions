/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 3rd March 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1788/A

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
    int ct=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==2)
            ct++;
    }
    if(ct==0)
        cout << 1 << endl;
    else if(ct%2!=0)
        cout << -1 << endl;
    else if(ct>0 && ct%2==0)
        {
            int l=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]==2)
                    l++;
                if(l==(ct/2))
                    {
                        l=i;
                        break;
                    }
            }
            cout << l+1 << endl;
        }
    
    
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
