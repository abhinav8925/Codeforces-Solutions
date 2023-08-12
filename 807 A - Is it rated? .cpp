/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 12th August 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/807/A

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



void solve()
{
    
    // cout.precision(7);
    
    bool rated=false,unrated=false,may=false;
    
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    
    for(int i=0;i<n;i++){
        if(v[i].first!=v[i].second){
            cout << "rated" << endl;
            return;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(v[i].first>v[j].first){
                cout << "unrated" << endl;
                return;
            }
        }
    }
    
    cout << "maybe" << endl;
    
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
