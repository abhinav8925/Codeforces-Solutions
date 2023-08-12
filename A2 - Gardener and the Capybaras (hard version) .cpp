/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 12th August 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1775/A2

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
    string s,a,b,c;
    cin>>s;

        int n=s.size(),i;

        

        if(s[0]==s[n-1]){

            a=s[0];

            c=s[n-1];

            

            b="";

            for(i=1; i<n-1; i++){

                b+=s[i];

            }

            

            cout<<a<<" "<<b<<" "<<c<<"\n";

        }else{

            if(s[0]==s[1]){

                a=s[0];

                b=s[1];

                c="";

                for(i=2; i<n; i++){

                    c+=s[i];

                }

            }else{

                if(s[0]=='a'){

                    a=s[0];

                    c=s[n-1];

                    b="";

                    for(i=1; i<n-1; i++){

                        b+=s[i];

                    }

                }else{

                    a=s[0];

                    b=s[1];

                    c="";

                    

                    for(i=2; i<n; i++){

                        c+=s[i];

                    }

                }

            }

            cout<<a<<" "<<b<<" "<<c<<"\n";

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
