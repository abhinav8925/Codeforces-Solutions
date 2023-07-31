/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 30th July 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1669/C

*/

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int N=1000001;
int mod=1000000007;
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
    // ios_base::sync_with_stdio(0);
    // cout.precision(7);
    
    ll n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    vector<int> o,e;
    for(int i=0;i<n;i++){
        if(i%2==0)
            e.push_back(v[i]);
        else
            o.push_back(v[i]);
    }
    for(int i=0;i<e.size()-1;i++){
        if(abs(e[i]-e[i+1])%2!=0){
            cout << "NO" << endl;
            return;
        }
    }
    for(int i=0;i<o.size()-1;i++){
        if(abs(o[i]-o[i+1])%2!=0){
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;


    
    
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
	// solve();
	return 0;
}
