/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 12th August 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/contest/1859/problem/0

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
    int n;
    cin>>n;
    int a[n];
    map<int,int> m;
    int ce=0,co=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
        
        if(a[i]%2==0)
            ce++;
        else
            co++;
    }
    
    if(m.size()==1){
        cout << -1 << endl;
        return;
    }
    else{
            
            vector<int> b,c;
            sort(a,a+n);
            int k=a[n-1];
            int in=0;
            
            
            for(int i=0;i<n;i++){
                if(a[i]==k){
                        in=i;
                    break;
                }
                 
                else{
                        b.push_back(a[i]);   
                }
            }
            // cout << endl;
            
        cout << in << " " << n-in << endl;
        for(int i=in;i<n;i++){
            c.push_back(k);
        }
        
        for(int i=0;i<b.size();i++)
            cout << b[i] << " ";
        
        cout << endl;
        
        for(int j=0;j<c.size();j++)
            cout << c[j] << " ";
        
        cout << endl;

        
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
