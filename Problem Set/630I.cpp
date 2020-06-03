/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll binpow(ll a, ll b);
int main()
{
    ll n,a=3,b=2;
    cin>>n;
    cout << 9*(n-3)*binpow(4,n-3)+6*binpow(4,n-2);
    return 0;
    
}
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
