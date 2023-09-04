/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 4th September 2023
  Code by - Abhinav Anand

  Problem link ->  https://codeforces.com/problemset/problem/463/B
  
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




void solve()
{
    // cout.precision(7);
    int  x = 0, y, n, sol = 0,energy = 0;
    cin >> n;
    for(int i = 1;i <= n; ++i)
    {
        cin >> y;
        energy += x-y;
        if(energy < 0){
            sol += -energy;
            energy = 0;
        }
        x = y;
    }
    cout<<sol<<"\n";
   
    
}
    
int main() {
	
	//sieve_prime_factor();
	// sieve();
	ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
	/*int t;
	cin>>t;
    
	while(t--)
	{
		solve();
	}*/
	solve();
	return 0;


}
