#include <bits/stdc++.h>

using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       string s;
       cin>>s;
       bool ans=false;
       
       int x=0,y=0;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='L')    x--;
           else if(s[i]=='R')   x++;
           else if(s[i]=='U')   y++;
           else if(s[i]=='D')   y--;
           
           if(x==1 && y==1)
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
