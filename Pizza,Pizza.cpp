// Date -> 12th January 2023
// Code By -> Abhinav Anand


// Problem Link -> https://codeforces.com/contest/979/problem/A

// JAI SHREE KRISHNA

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    n+=1;
    if(n==1)
        cout << 0 << endl;
    else if(n%2==0)
        cout << n/2 << endl;
    else
        cout << n << endl;
}
