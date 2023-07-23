
/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 23rd July 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/149/A

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
    
   
    int n;
    cin>>n;
    int sum=0,cnt=0,sum2=0;
    vector<int> v(12,0);
    for(int i=0;i<12;i++){
        int t;
        cin>>t;
        v[i]=t;
        sum+=t;
    }
    if(n==0){
        cout << 0 << endl;
        return;
    }
    else if(n>sum){
        cout << -1 << endl;
        return;
    }
    else {
        sort(v.begin(),v.end());
        for(int i=11;i>=0;i--){
            sum2+=v[i];
            cnt++;
            if(sum2>=n){
                cout << cnt << endl;
                return;
            }
        }
    }
    
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
