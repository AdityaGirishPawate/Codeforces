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
       
       if(n==1){
          cout<<0<<endl;
          continue;
       } 
       int temp=n;
       int l=0,k=0;
       while(temp!=0){
           if(temp%2==0){
               l++;
               temp/=2;
           }
           else break;
       }
       temp=n;
       while(temp!=0){
           if(temp%3==0){
               k++;
               temp/=3;
           }
           else break;
       }
       bool flag=false;
       
       if(k==0 && l==0)
        flag=true;
       else if( (int32_t)(n/((int32_t)pow(2,l)*(int32_t)pow(3,k))) != 1){    
        flag=true;
       }
        if(l>k || flag==true){
            
                cout<<-1<<endl;
            }
        else if(l<k){
                cout<<2*k-l<<endl;
            }
        else{
              cout<<k<<endl;  
            }
       
      
    }
    

    return 0;
}
