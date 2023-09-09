/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 9th September 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1395/A
  
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


int ch(int a,int b,int c,int d){
    
    if(a%2 + b%2 + c%2 + d%2 >1)
        return 0;
    return 1;
}
void solve()
{
    // cout.precision(7);
    
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    
    
    if(ch(a,b,c,d))
        cout << "Yes" << endl;
    else if(a>0 && b>0 && c>0  && ch(a-1,b-1,c-1,d+1))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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
