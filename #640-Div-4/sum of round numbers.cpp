#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int N=1e5;
#define INF 1e9

int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i=0,count=0;
        vector<int> a;
        while(n!=0){
            if(n%10==0){
                i++;
                n/=10;
            }
            else{
                a.push_back((n%10)*pow(10,i));
                i++;
                n/=10;
                count++;
            }
        }
        cout<<count<<endl;
        for(auto k:a)   cout<<k<<" ";
        cout<<endl;
    }
    return 0;
}


