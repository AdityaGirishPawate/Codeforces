//const int N=1e5;
#define INF 1e10
#include <bits/stdc++.h>
#include <random>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <utility>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <iomanip>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define f(i,a,b) for(int i=a;i< b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1e9+7)
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< > >

#define int long long
//#define int long
typedef tree<int,null_type,less<>,rb_tree_tag,tree_order_statistics_node_update> o_set;
vector<vector<int>> g;
//std::ios::sync_with_stdio(false);

int32_t main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int> t[4];
    vector<int> s[4];
    int a,b,temp;
    rep(i,n){
        cin>>temp>>a>>b;
        t[2*a+b].push_back(temp);
    }
    rep(i,4){
        sort(t[i].begin(),t[i].end());
        s[i].push_back(0);
        for(auto it:t[i]){
            s[i].push_back(s[i].back()+it);
        }
    }
    int ans=INF;
    for(int l=0;l < min((int)(s[3].size()),k+1);l++){
        if(k-l < s[2].size() && k-l < s[1].size())
            ans=min(ans,s[3][l]+s[2][k-l]+s[1][k-l]);
    }
    if(ans==(int)INF)    ans=-1;
    cout<<ans<<endl;

}


















