/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 16th September 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1843/D
  
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

vector<vector<int>> g;
vector<ll> cnt;

void dfs(int v,int p){
    
    if(g[v].size()==1 && g[v][0]==p)
        cnt[v]=1;
    else{
        for(auto u :g[v]){
            if(u!=p){
                dfs(u,v);
                cnt[v]+=cnt[u];
            }
        }
    }
}

void solve(){
    
    int n,q;
    cin>>n;
    g.assign(n,vector<int>());
    
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        
        u--;
        v--;
        
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    cnt.assign(n,0);
    
    dfs(0,-1);
    
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        
        a--;
        b--;
        
        ll ans = cnt[a] * cnt[b];
        
        cout << ans << nl;
    }
    
}



int main() {
	
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;

}
