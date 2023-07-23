/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 23rd July 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1005/B 
  
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
    
   
    string a,b;
    cin>>a>>b;
    int n1=a.size(),n2=b.size();
    
    int cnt=0,mx=0;
    for(int i=n1-1,j=n2-1;i>=0;){
        if(a[i]==b[j]){
            cnt++;
            i--,j--;
        }
        else{
            break;
        }
    }
    cout << n1+n2-max(mx,cnt)*2 << endl;
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
