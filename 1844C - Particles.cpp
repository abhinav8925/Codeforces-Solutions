/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 15th September 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1844/C
  
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

int c[200000];



int main() {
	
	 int i;
    int t,n;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        for (i = 0; i < n; i++) scanf("%d",&c[i]);

        int allneg = 1;
        for (i = 0; i < n; i++) allneg &= (c[i] < 0);
        if (allneg) printf("%d\n",*max_element(c,c+n));
        else {
            ll ans1 = 0,ans2 = 0;
            for (i = 0; i < n; i++) {
                if (i & 1) ans1 += max(c[i],0);
                else ans2 += max(c[i],0);
            }
            printf("%lld\n",max(ans1,ans2));
        }
    }
    return 0;

}
