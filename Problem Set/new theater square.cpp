#include <bits/stdc++.h>
using namespace std;
//#define int long long
//const int N=1e5;
#define INF 1e9

int32_t main() {
    int t,n,m,x,y;
    cin>>t;
    while(t--){
        cin>>n>>m>>x>>y;
        int total_price=0;
        int two=min(x*2,y);
        for (int i = 0; i < n; ++i) {
            string l;
            cin>>l;
            for (int j = 0; j < m; ++j) {
                if(l[j]=='*') continue;
                else{
                    if(j+1==m || l[j+1]!=l[j])  total_price+=x;
                    else if(l[j+1]==l[j]) {
                        total_price+=two;
                        j++;
                    }

                }
            }
        }
        cout<<total_price<<endl;
    }


}


