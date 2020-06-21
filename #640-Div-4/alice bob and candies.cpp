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
        deque<int> a;
        for (int i = 0; i < n; ++i) {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        int suma=a.front();
        //for(auto k:a) cout<<k<<" ";
        //cout<<endl;
        a.pop_front();
        //for(auto k:a) cout<<k<<" ";
        //cout<<endl;
        int sumb=0;
        int preva=suma;
        int prevb;
        int count=1;
        while(!a.empty()){
            prevb=0;
            while(prevb<=preva && !a.empty()){
                prevb+=a.back();
                a.pop_back();
            }
            sumb+=prevb;
            count++;
            if(a.empty())   break;
            preva=0;
            while(preva<=prevb && !a.empty()){
                preva+=a.front();
                a.pop_front();
            }
            suma+=preva;
            count++;
        }
        cout<<count<<" "<<suma<<" "<<sumb<<endl;

    }
    return 0;
}


