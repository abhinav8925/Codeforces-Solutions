/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 23rd July 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/519/A
  
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
    
   
    char a[8][8];
    int b=0,w=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>a[i][j];
            
            if(a[i][j]=='Q')
                w+=9;
            if(a[i][j]=='q')
                b+=9;
            if(a[i][j]=='R')
                w+=5;
            if(a[i][j]=='r')
                b+=5;
            if(a[i][j]=='B')
                w+=3;
            if(a[i][j]=='b')
                b+=3;
            if(a[i][j]=='N')
                w+=3;
            if(a[i][j]=='n')
                b+=3;
            if(a[i][j]=='P')
                w+=1;
            if(a[i][j]=='p')
                b+=1;
                
        }
    }
    
    if(b==w)    
        cout << "Draw" << endl;
    else if(b>w)    
        cout << "Black" << endl;
    else
        cout << "White" << endl;
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
