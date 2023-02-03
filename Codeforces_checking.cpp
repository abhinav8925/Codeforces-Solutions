#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--)
   {
       char a;
       cin>>a;
       string s="codeforces";
       bool ans=false;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]==a)
           {
               ans=true;
               break;
           }
           
       }
       if(ans)
       cout << "YES" << endl;
      else
        cout << "NO" << endl;
   }
}
