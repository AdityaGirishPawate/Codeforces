#include <bits/stdc++.h>
using namespace std;
//#define int long long
//const int N=1e5;
#define INF 1e9

int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int odd=0,even=0;
        for (int i = 0; i < n; ++i) {
            cin>>v[i];
            if(v[i]%2==0 && i%2==1) odd++;
            else if(v[i]%2==1 && i%2==0)    even++;
        }
        if(odd==even)   cout<<odd<<endl;
        else cout<<-1<<endl;

    }


}


