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
       int n;
       cin>>n;
       char s[n];
       int sum=0,m=1e5;
       for(int i=0;i<n;i++){
           cin>>s[i];
           if(s[i]=='('){
               sum++;
           }    
           else if(s[i]==')'){
               sum--;
           }
           m=min(m,sum);
       }
       cout<<-m<<endl;
      
    }
    

    return 0;
}
