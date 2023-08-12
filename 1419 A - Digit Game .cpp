/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 12th August 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1419/A

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
    
    
    int r_even=0;
    int r_odd=0;
    int b_even=0;
    int b_odd=0;
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    for(int i=0;i<n;i++){
            if(i%2==0){
                if((s[i]-'0')%2==0)
                    r_even++;
                else
                    r_odd++;
            }
            else{
                if((s[i]-'0')%2==0)
                    b_even++;
                else
                    b_odd++;
            }
        }
        if(n%2==0){
            if(b_even>0) cout<<2<<"\n";
            else cout<<1<<"\n";
        }
        else{
            if(r_odd>0) cout<<1<<"\n";
            else cout<<2<<"\n";
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
