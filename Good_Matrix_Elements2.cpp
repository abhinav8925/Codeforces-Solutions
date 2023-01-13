// ***** !!!!! JAI SHREE KRISHNA !!!!! *****


// Date -> 13th January 2022
// Code By -> Abhinav Anand

// Problem Link -> https://codeforces.com/contest/177/problem/A2#


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
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    
    int sum=0;
    int p=n-1,h=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
            if(i==(n)/2)
                {
                    sum+=a[i][j];
                }
            else if(i==j)
                {
                    sum+=a[i][j];
                    sum+=a[h][p];
                }
            else if(j==(n)/2)
                {
                    sum+=a[i][j];
                }
        }
        h++;
        p--;
    }

    cout << sum << endl;
    
}

int main() {
	
	
	solve();
	
	return 0;
}
