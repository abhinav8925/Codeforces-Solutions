// Date -> 20th August 2022
// Code By -> Abhinav Anand


// Problem Link -> https://codeforces.com/problemset/problem/749/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
      int k=n/2;
      vector<int> v;
      cout << k << endl;
      for(int i=0;i<k;i++)
      {
        v.push_back(2);
      }
      for(int i=0;i<k;i++)
        cout <<v[i] << " ";
    }
    else if(n%2!=0)
    {
      int k=n/2;
      vector<int> v;
      cout << k << endl;
      for(int i=0;i<k-1;i++)
      {
        v.push_back(2);
      }
      v.push_back(3);
      for(int i=0;i<k;i++)
      {
        cout << v[i] << " ";
      }
    }
}