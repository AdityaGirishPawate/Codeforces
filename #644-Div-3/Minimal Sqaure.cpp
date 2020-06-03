#include <bits/stdc++.h>
 
using namespace std;
#define ll long long 
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<pow(min(max(a,2*b),max(b,2*a)),2)<<endl;
    }
 
    return 0;
}
