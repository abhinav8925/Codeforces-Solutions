/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 29th June 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1808/A

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


int lucky(int num){
    
    int mn=11,mx=0;
    while(num>0){
        mn=min(mn,num%10);
        mx=max(mx,num%10);
        num/=10;
    }
    
    
    
    return mx-mn;
}
void solve()
{
    // ios_base::sync_with_stdio(0);
    // cout.precision(7);
    int a,b;
    cin>>a>>b;
    int ans=0,ans2=0;
    for(int i=a;i<=b;i++){
        int k=lucky(i);
        ans=max(ans,k);
        if(ans==k){
            ans2=i;
        }
        if(ans==9)
            break;
    }
    
    cout << ans2 << endl;
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
	return 0;
}
