/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 7th  March 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/318/A

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
    ll n,x;
    cin>>n>>x;
    
    if(n%2==0)
    {
        if(x>=1 && x<=(n/2))
            cout << 2*(x-1)+ 1 << endl;
        else
            cout << 2*(abs((n/2)-x)) << endl;
    }
    else if(n%2!=0)
    {
        if(x>=1 && x<=((n/2)+1))
            cout << 2*(x-1)+ 1 << endl;
        else
            cout << 2*abs(((n/2)+1)-x) << endl;
    }
    
    
}

int main() {
	
	
	    solve();

	return 0;
}
