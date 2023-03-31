
/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 31st March 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/contest/1807/problem/B

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
    int sum=0;
    int sum2=0;
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum2+=a[i];
            if(a[i]%2!=0)
                sum+=a[i];
        }
    
    if(sum2-sum>sum)
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
