/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll a,b,c,d,sum,i,j,k,count=0;
    cin>>a>>b>>c>>d;
    if(a!=b){
    
        for(i=a;i<=b;i++){
            if(b!=c){
                for(j=b;j<=c;j++){
                    sum=i+j;
                    if(c!=d){
                        for(k=c;k<=d;k++){
                            if(sum>k)
                                count++;
                            else
                                break;
                        }
                    }
                    else{
                        if(sum>c)
                            count++;
                    }    
                }
            
            }
            else{
                sum=i+b;
                if(c!=d){
                        for(k=c;k<=d;k++){
                            if(sum>k)
                                count++;
                            else
                                break;
                        }
                    }
                    else{
                        if(sum>c)
                            count++;
                    }
            }
            
        }
        
    }
    else{
        if(b!=c){
                for(j=b;j<=c;j++){
                    sum=a+j;
                    if(c!=d){
                        for(k=c;k<=d;k++){
                            if(sum>k)
                                count++;
                            else
                                break;
                        }
                    }
                    else{
                        if(sum>c)
                            count++;
                    }    
                }
            
            }
            else{
                sum=a+b;
                if(c!=d){
                        for(k=c;k<=d;k++){
                            if(sum>k)
                                count++;
                            else
                                break;
                        }
                    }
                    else{
                        if(sum>c)
                            count++;
                    }
            }
        
    }
    cout<<count<<endl;

    return 0;
}
