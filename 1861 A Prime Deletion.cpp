#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isp(ll n ){
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

void solve(){
    string s;
    cin >> s;

    vector<string> v;

    for(int i=0;i<pow(2,9)-1;i++){
        string ans="";
        for(int j=0;j<9;j++){
            if(i & (1<<j)) 
                ans.push_back(s[j]);  
        }
        v.push_back(ans);
    }
    
    
    
    
    for(ll i=0;i<v.size();i++){
        if(v[i].size()>=2){
        ll d=stoi(v[i]);
        if(isp(d)){
            cout << d << endl;
            return;
        }
        }
    }
    cout << -1 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
