/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 10th August 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1496/A

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

ll fact(ll n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}
ll sum(ll n) {
    ll sum = 0;
    while (n != 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}



void solve()
{
    
    // cout.precision(7);
    
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    if((2*k)>=n){
        cout << "NO" << endl;
        return;
    }
    else{
        for(int i=0;i<k;i++){
            if(s[i]!=s[n-1-i]){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
    
    
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
