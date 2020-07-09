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
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int>(m));
        bool flag=true;
        rep(i,n){
            rep(j,m){
                cin>>a[i][j];
                if((i==0&&j==0)||(i==0&&j==m-1)||(i==n-1&&j==0)||(i==n-1&&j==m-1)){
                    if(a[i][j]>2)
                        flag=false;
                    a[i][j]=2;
                }
                else if(i==0||i==n-1||j==0||j==m-1){
                    if(a[i][j]>3)
                        flag= false;
                    a[i][j]=3;
                }
                else{
                    if(a[i][j]>4)
                        flag= false;
                    a[i][j]=4;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
            rep(i,n){
                rep(j,m){
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        } else  cout<<"NO"<<endl;

    }

}


















