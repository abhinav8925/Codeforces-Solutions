// ***** !!!!! JAI SHREE KRISHNA !!!!! *****

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
    if(n<=10)
        cout << s << endl;
    else
        cout << s[0]<<n-2<<s[n-1] << endl;
}

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

	return 0;
}
