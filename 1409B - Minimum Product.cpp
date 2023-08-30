/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 30th August 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1409/B

*/

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
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
 
bool isprime(ll n)
{
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}


ll ch(ll a,ll b, ll x, ll y, ll n){
    
    ll dif1= a-x;
    ll dif2= b-y;
    
    ll c1= min(dif1,n);
    
    a-=c1;
    n-=c1;
    
    ll c2= min(dif2,n);
    
    b-=c2;
    n-=c2;
    
    
    return a*b;
}

void solve()
{
    // cout.precision(7);
    
    ll a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    
    ll ans=min(ch(a,b,x,y,n),ch(b,a,y,x,n));
    
    
    cout << ans << endl;
    
    
}
    
int main() {
	
	//sieve_prime_factor();
	// sieve();
	ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
// 	solve();
	return 0;


}
