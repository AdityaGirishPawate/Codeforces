
#include <bits/stdc++.h>
using namespace std;
//#define int long long
//const int N=1e5;
#define INF 1e9
 
int32_t main() {
    int t;
    cin>>t;
    while(t--){
        string b;
        cin>>b;
        int n=b.size();
        char ans[n/2+1];
        int k=0;
        for (int i = 0; i < n; ++i) {
            if(i==0 || i==n-1)  ans[k++]=b[i];
            else{
                ans[k++]=b[i++];
            }
        }
        for (int j = 0; j < n/2+1; ++j) {
            cout<<ans[j];
        }
        cout<<endl;
 
    }
 
 
}
