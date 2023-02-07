/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****

  Date - 31st January 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/263/A

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

    int n=5;
    int aa=0,b=0;
    int a[n][n];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {    aa=i;
                 b=j;
            }
        }
    }
    cout << abs(3-aa)+ abs(3-b) << endl;
}

int main() {

	solve();

	return 0;
}
