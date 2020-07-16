//const int N=1e5;
#define INF 2*1e18
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
#define pdqueue priority_queue< int,vi ,greater< int > >
#define int long long
//#define int long
typedef tree<pair<int,int>,null_type,less<>,rb_tree_tag,tree_order_statistics_node_update> o_set;
vector<vector<int>> g;
//std::ios::sync_with_stdio(false);


int32_t main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b;
    rep(i,n)    cin>>a[i];
    b.push_back(0);
    f(i,0,n){
        if(!(i%2))  b.push_back(a[i]);
    }
    f(i,0,n){
        if(i%2)     b.push_back(a[i]);
    }
    f(i,0,n){
        if(!(i%2))  b.push_back(a[i]);
    }
    rep(i,b.size()-1){
        b[i+1]+=b[i];
    }
    int maxi=0,l=0,r=(n+1)/2;
    rep(i,n){
        maxi=max(maxi,b[r]-b[l]);
        r++,l++;
    }
    cout<<maxi<<endl;
    return 0;
}


















