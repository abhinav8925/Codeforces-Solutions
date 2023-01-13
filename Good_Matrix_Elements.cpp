// ***** !!!!! JAI SHREE KRISHNA !!!!! *****


// Date -> 13th January 2022
// Code By -> Abhinav Anand

// Problem Link -> https://codeforces.com/problemset/problem/177/A1


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
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    
    int sum=0;
    int p=n,h=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            
            if(i==(n+1)/2)
                {
                    sum+=a[i][j];
                }
            else if(i==j)
                {
                    sum+=a[i][j];
                    sum+=a[h][p];
                }
            else if(j==(n+1)/2)
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
