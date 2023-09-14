/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 15th September 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1851/D
  
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
ll n;
bool isPermutation(vector<ll> a) {
    // ll n = a.size();
    for (int i = 0; i < n; ++i) {
        if (a[i] <= 0 || a[i] > n) {
            return false;
        }
    }
    set<ll> s(a.begin(), a.end());
    return s.size() == n;
}

vector<ll> prefSumToArray(vector<ll> p) {
    
    vector<ll> res(n);
    res[0] = p[0];
    for (int i = 1; i < n; ++i) {
        res[i] = p[i] - p[i - 1];
    }
    return res;
}
void solve()
{
    // cout.precision(7);
    
   
 cin >> n;
    vector<ll> a(n - 1);
    for (int i = 0; i + 1 < n; ++i) {
        cin >> a[i];
    }
    ll x = n * (n + 1) / 2;
    if (a.back() != x) {
        a.push_back(x);
        vector<ll> b = prefSumToArray(a);
        if (isPermutation(b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        return;
    }
    map<ll, int> cnt;
    cnt[a[0]]++;
    for (int i = 1; i < n - 1; ++i) {
        cnt[a[i] - a[i - 1]]++;
    }
    vector<int> cntGt1;
    for (auto p: cnt) {
        if (p.second > 1) {
            cntGt1.push_back(p.first);
        }
    }
    if (cntGt1.size() > 1) {
        cout << "NO\n";
        return;
    }
    if (cntGt1.size() == 1) {
        int x1 = cntGt1[0];
        if (cnt[x1] > 2) {
            cout << "NO\n";
            return;
        }
    }
    vector<int> cnt0;
    for (int i = 1; i <= n; ++i) {
        if (cnt[i] == 0) {
            cnt0.push_back(i);
        }
    }
    if (cnt0.size() != 2) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
   
    
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
