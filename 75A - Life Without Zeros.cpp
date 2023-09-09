/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 9th September 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/75/A
  
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
    
     ll n,m;
    cin>>n>>m;
    ll k=n+m;
    string s1=to_string(n);
    string s2=to_string(m);
    string s3=to_string(k);
    string s="";
    string t="";
    string j="";
    for(ll i=0;i<s1.size();i++){
        if(s1[i]!='0'){
            s=s+s1[i];
        }
    }
    for(ll i=0;i<s2.size();i++){
        if(s2[i]!='0'){
            t=t+s2[i];
        }
    }
    for(ll i=0;i<s3.size();i++){
        if(s3[i]!='0'){
            j=j+s3[i];
        }
    }
    ll k1,k2,k3;
    k1=(ll)stoi(s);
    k2=(ll)stoi(t);
    k3=(ll)stoi(j);
    if(k1+k2==k3){
        cout<<"YES"<<nl;
    }
    else{
        cout<<"NO"<<nl;
    }
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
