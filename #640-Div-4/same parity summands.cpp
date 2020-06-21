#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5;
#define INF 1e9

int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%2){
            if(k%2==0 || n<k)  cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                for (int i = 0; i < k-1; ++i) {
                    cout<<1<<" ";
                }
                cout<<n-k+1<<endl;
            }
        }
        else{
            if(n>=k && k%2==0){
                cout<<"YES"<<endl;
                for (int i = 0; i < k-1; ++i) {
                    cout<<1<<" ";
                }
                cout<<n-k+1<<endl;
            }
            else if(n/k >= 2){
                cout<<"YES"<<endl;
                for (int i = 0; i < k-1; ++i) {
                    cout<<2<<" ";
                }
                cout<<n-(k-1)*2<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}


