/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 15th September 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/1846/C
  
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



void solve(){
       
    
        int n, m, h;
        cin >> n >> m >> h;
        pair<int, long long> rud;
        int ans = 1;
        for(int i = 0; i < n; i++){
            vector<int> cur(m);
            for(int j = 0; j < m; j++){
                cin >> cur[j];
            }
            sort(cur.begin(), cur.end());
            int task_cnt = 0;
            long long penalty = 0, sum = 0;
            for(int j = 0; j < m; j++){
                if (sum + cur[j] > h) break;
                sum += cur[j];
                penalty += sum;
                task_cnt++;
            }
            if (i){
                if (make_pair(-task_cnt, penalty) < rud) ans++;
            } else rud = {-task_cnt, penalty};
        }
        cout << ans << '\n';
    
    
    
}
int main() {
	
	//sieve_prime_factor();
	// sieve();
	ios_base::sync_with_stdio(0);
    cin.tie(nullptr); 
    cout.tie(nullptr);
	int t;
	cin>>t;
    
	while(t--)
	{
		solve();
 }
// 	solve();
	return 0;

}
