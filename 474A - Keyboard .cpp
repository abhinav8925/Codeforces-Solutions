
/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 23rd July 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/474/A

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
    
   
    string a="qwertyuiop",b="asdfghjkl;",c="zxcvbnm,./";
    string s1,s2,ans="";
    cin>>s1>>s2;
    
    if(s1=="L"){
        for(int i=0;i<s2.size();i++){
            size_t f=a.find(s2[i]);
            if(f!=string::npos)
                ans+=a[f+1];
            size_t s=b.find(s2[i]);
            if(s!=string::npos)
                ans+=b[s+1];
            size_t t=c.find(s2[i]);
            if(t!=string::npos)
                ans+=c[t+1];
        }
    }
    else if(s1=="R"){
        for(int i=0;i<s2.size();i++){
            size_t f=a.find(s2[i]);
            if(f!=string::npos)
                ans+=a[f-1];
            size_t s=b.find(s2[i]);
            if(s!=string::npos)
                ans+=b[s-1];
            size_t t=c.find(s2[i]);
            if(t!=string::npos)
                ans+=c[t-1];
        }
    }
    
    cout << ans << endl;
    
    
}


int main() {
	
	//sieve_prime_factor();
	// sieve();
	/*int t;
	cin>>t;
	while(t--)
	{
		solve();
	}*/
	
	solve();
	
	return 0;
}
