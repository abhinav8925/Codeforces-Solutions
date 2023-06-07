/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 7th June 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/12/A

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
    
    int n=3;
    char ar[3][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ar[i][j];
        }
    }
    
    
    
    
    for(int i=0,a=2;i<2;i++,a--){
        for(int j=i,b=a;j<3 && b>=0;j++,b--){
            if(ar[i][j]!=ar[a][b]){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main() {
	
	//sieve_prime_factor();
	// sieve();
	
		solve();
	
	return 0;
}
