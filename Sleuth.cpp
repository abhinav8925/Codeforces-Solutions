/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 21st January 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/49/A

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
    getline(cin,s);
    string k="";
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
        if(s[i]!=' ')
            k+=s[i];
    }
    if(k[k.size()-2]=='a' || k[k.size()-2]=='e' || k[k.size()-2]=='i' || k[k.size()-2]=='o' || k[k.size()-2]=='u' || k[k.size()-2]=='y')
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
	

  solve();
	return 0;
}
