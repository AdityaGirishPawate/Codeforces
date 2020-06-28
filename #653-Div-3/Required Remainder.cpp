/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        int rem=n%x;
        if(rem-y==0){
            cout<<n<<endl;
        }
        else if(rem-y>0){
            cout<<n-(rem-y)<<endl;
        }
        else{
            cout<<n-(rem+x-y)<<endl;
        }
    }
    

    return 0;
}
