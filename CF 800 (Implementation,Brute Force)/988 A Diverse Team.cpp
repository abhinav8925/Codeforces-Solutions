/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 22nd June 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1795/A

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
    // ios_base::sync_with_stdio(0);
    // cout.precision(7);
    
    int n,k;
    cin>>n>>k;
    int a[n],b[101]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]=i+1;
    }
    
    int cnt=0;
    for(int i=1;i<101;i++){
        if(b[i]!=0)
            cnt++;
    }
    
    if(cnt>=k){
        cout << "YES" << endl;
        int ans=0;
            for(int i=0;i<101;i++){
                if(b[i]!=0){
                    cout << b[i] << " ";
                    ans++;
                }
                if(ans>=k)
                    break;
            }
        
    }
    else
        cout << "NO" << endl;
    
    
    
    
}

int main() {
	
	//sieve_prime_factor();
	// sieve();
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
		solve();
// 	}
	return 0;
}
