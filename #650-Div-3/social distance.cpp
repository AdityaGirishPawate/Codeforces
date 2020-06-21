#include <bits/stdc++.h>
using namespace std;
//#define int long long
//const int N=1e5;
#define INF 1e9

int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string l;
        cin>>l;
        set<int> st;
        st.insert(-1*k-1);
        st.insert(n+k);
        for (int i = 0; i < n; ++i) {
            if(l[i]=='1')  st.insert(i);
        }
        int count=0;
        for (int j = 0; j < n; ++j) {
            //cout<<(*st.upper_bound(j)-j)<<"  "<<j-*(--st.upper_bound(j))<<endl;
            if(j==*(st.lower_bound(j)));
            else if(j-*(--st.upper_bound(j))>k && *st.upper_bound(j)-j>k) {
                count++;
                st.insert(j);
            }
        }
        cout<<count<<endl;

    }


}


