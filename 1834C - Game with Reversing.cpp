/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 16th September 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1834/C
  
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



void solve(){
    
    int n;
    cin>>n;
    
    
    string s,t;
    cin>>s>>t;
    
    if(s==t){
        cout << "0" << nl;
        return;
    }
    
    int cnt1=0,cnt2=0;
    
    for(int i=0;i<n;i++){
        if(s[i] != t[i])
            cnt1++;
        if(s[i]!=t[n-i-1])
            cnt2++;
    }
    
    if(cnt1%2==0)
        cnt1 = 2*cnt1;
    else    
        cnt1=max(0,2*cnt1-1);
    
    if(cnt2%2!=0)
        cnt2*=2;
    else
        cnt2 = max(2*cnt2-1,2);
        
    
    cout << min(cnt1,cnt2) << endl;
}



int main() {
	
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;

}
