/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 3rd August 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1433/C

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
    int n;
    cin>>n;
    map<int,int> m;
    int a[n];
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
        m[a[i]]++;
    }
    
    if(m.size()==1){
        cout << -1 << endl;
        return;
    }
    else{
    
        int ind=-1;
        for(int i=0;i<n;i++){
            if(a[i]!=mx)
                continue;
            if(i>0 && a[i-1]!=mx)
                ind=i+1;
            if(i<n-1 && a[i+1]!=mx)
                ind=i+1;
        }
        cout << ind << endl;
            
        
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
