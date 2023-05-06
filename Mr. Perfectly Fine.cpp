
/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 6th May 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/contest/1829/problem/C

*/

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int N=1000001;
vector<int> arr(N,true);
vector<int> prime_num;
vector<int> prime_fact(N,-1);

void sieve()
{
    
    arr[0]=arr[1]=0;
    for(int i=2;i<=sqrt(N);i++)
    {
        if(arr[i]==1)
        {
            for(int j=i*i;j<=N;j+=i)
                arr[j]=0;
        }
    }
    
    for(int i=2;i<=N;i++)
    {
        if(arr[i])
            prime_num.push_back(i);
    }
}

void sieve_prime_factor()
{
    
    for(int i=2;i<=N;i++)
    {
        if(prime_fact[i]==-1)
        {
            for(int j=i;j<=N;j+=i)
            {
                // if(prime_fact[j]==-1)
                    prime_fact[j]=i;
            }
        }
    }
    
    int k;
    cin>>k;
    while(k>1)
    {
        cout << prime_fact[k] << " ";
        k=k/prime_fact[k];
    }
}

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
    ll all=INT_MAX,both=INT_MAX,both2=INT_MAX;
    bool ans1=false,ans2=false;
    while(n--)
    {
        ll m;
        string s;
        cin>>m>>s;
        
        if(s=="11")
        {
            ans1=true;
            ans2=true;
            all=min(all,m);
        }
        else
        {
            if(s=="10")
            {
                ans1=true;
                both=min(both,m);
            }
            if(s=="01")
            {
                ans2=true;
                both2=min(both2,m);
            }
        }
    }
    if(ans1 && ans2)
        cout << min(all,(both+both2)) << endl;
    else
        cout << -1 << endl;
}

int main() {
	
	//sieve_prime_factor();
	// sieve();
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
