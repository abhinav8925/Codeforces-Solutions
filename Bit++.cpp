// Date - 7th August 2022
// Code by - Abhinav Anand

// problem link
//  https://codeforces.com/contest/282/problem/A

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[0] == '+' || s[2] == '+')
            x++;
        else if (s[0] == '-' || s[2] == '-')
            x--;
    }
    cout << x << endl;
}