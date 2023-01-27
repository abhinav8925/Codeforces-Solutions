/*
    JAI SHREE KRISHNA
    
    Date -> 27th January 2022
    Code By -> Abhinav Anand
    
    Problem Link -> https://codeforces.com/contest/1790/problem/A
    
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string k="3141592653589793238462643383279502881";
        int n=s.size();
        int cnt=0;
        bool ans=true;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=k[i])
                {
                    
                    break;
                }
            else
                cnt++;
        }
        cout << cnt << endl;
        
        
        
    }
}
