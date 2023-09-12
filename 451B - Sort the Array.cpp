/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 12th September 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/451/B
  
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

#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
typedef vector<ll> vl;

void solve()
{
    // cout.precision(7);
    ll n;
    cin>>n;
    vl v(n),temp(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        temp[i]=v[i];
    }
    srt(v);
    ll first=-1,second=-1;
    for(ll i=0;i<n;i++)
    {
        if(v[i]!=temp[i])
        {
            if(first==-1)
                first=i;
            second=i+1;
        }
    }
    
    reverse(temp.begin()+first,temp.begin()+second);
    
    if(is_sorted(all(temp)))
    {
        cout<<"yes"<<endl;
        if(first==-1)
            first=0;
        if(second==-1)
            second=1;
        cout<<first+1<<" "<<second<<endl;
    }
    else
        cout<<"no"<<endl;
    
}
    
int main() {
	
	//sieve_prime_factor();
	// sieve();
	ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
// 	int t;
// 	cin>>t;
    
// 	while(t--)
// 	{
// 		solve();
//  }
	solve();
	return 0;

}
