///*
//  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
//
//  Date - 31st January 2023
//  Code by - Abhinav Anand
//
//  Problem link -> https://codeforces.com/problemset/problem/339/A
//
//*/
//
//#include <iostream>
//#include <algorithm>
//#include <bits/stdc++.h>
//#define ll long long int
//#define endl "\n"
//using namespace std;
//
//bool isprime(int n)
//{
//    for(int i=2;i<=sqrt(n);i++)
//    {
//        if(n%i==0)
//            return false;
//    }
//    return true;
//}
//
//void solve()
//{
//
//    string s,k;
//    cin>>s;
//    for(int i=0;i<s.size();i++)
//    {
//        k+=s[i];
//        i++;
//    }
//    sort(k.begin(),k.end());
//
//     string l="";
//     l+=k[0];
//
//
//    for(int i=1;i<k.size();i++)
//    {
//        l+='+';
//        l+=k[i];
//    }
//     cout << l << endl;
//
//
//}
//
//int main() {
//
//	solve();
//
//	return 0;
//}











/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****

  Date - 31st January 2023
  Code by - Abhinav Anand

  Problem link -> https://codeforces.com/problemset/problem/339/A

*/

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

void solve()
{

    string s,k;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        k+=s[i];
        i++;
    }
    sort(k.begin(),k.end());



    cout << k[0];
    for(int i=1;i<k.size();i++)
    {
        cout << '+'<<k[i];
    }

}

int main() {

	solve();

	return 0;
}
