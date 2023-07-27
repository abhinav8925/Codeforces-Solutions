
/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 6th May 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/709/A

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
    int n,b,d;
    cin>>n>>b>>d;

    ll a[n],sum=0,cnt=0;
    

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=b)
            sum+=a[i];
        if(sum>d){
            cnt++;
            sum=0;
        }
    }

    cout << cnt << endl;
}

int main() {
	
	//sieve_prime_factor();
	// sieve();
	// int t;
	// cin>>t;
	// while(t--)
	// {
	// 	solve();
	// }
    solve();
	return 0;
}
