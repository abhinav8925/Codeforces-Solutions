// Problem Link -> https://codeforces.com/contest/1814/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        // if(n<2)
        //     {
        //         cout << "NO" << endl;
        //     }
        // else if(n>=2)
        // {
             if(k%2!=0 && k!=2)
            {
                cout << "YES" << endl;       
            }
                
            else if(k%2==0 && k!=2)
            {
                if(n%2==0)
                    cout << "YES" << endl;
                else 
                    cout << "NO" << endl;
            }
        // }
       
        
        
    }
}
