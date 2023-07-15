/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 15th July 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1611/A

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
    
    vector<int> v(10,0);
    int n;
    cin>>n;
    
    
    
    if(n%2==0){
        cout << 0 << endl;
        return;
    }
    bool ans=false;
    int num=n,cntd=0;
    while(num!=0){
        v[num%10]++;
        cntd++;
        num/=10;
    }
    
    for(int i=1;i<10;i++){
        if(i%2==0 && v[i]>=1){
            ans=true;
            break;
        }
    }
    
    if(ans==false)
        cout << "-1" << endl;
    else if(ans){
        
        while(n>=10){
            n/=10;
        }
        
        if((n%10)%2==0)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    
    
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
