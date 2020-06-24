//const int N=1e5;
#define INF 1e9
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
//#define int long long
typedef tree<int,null_type,less<>,rb_tree_tag,tree_order_statistics_node_update> o_set;
vector<vector<int>> g;
//std::ios::sync_with_stdio(false);

int32_t main() {
    //std::ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[26][n+1];
        rep(i,26){
            f(j,0,n+1){
                a[i][j]=0;
            }
        }
        int c[n];
        rep(i,n) {
            cin >> c[i];
            c[i]--;
            a[c[i]][i+1]++;
        }
        int ans=0;
        rep(i,26){
            f(j,1,n+1){
                a[i][j]+=a[i][j-1];
            }
            ans=max(ans,a[i][n]);
        }

        f(i,1,n){
            f(j,i,n){
                int ctnin=0,ctnout=0;
                rep(k,26){
                    ctnin=max(ctnin,a[k][j]-a[k][i-1]);
                    ctnout=max(ctnout,min(a[k][i-1],a[k][n]-a[k][j]));
                }
                ans=max(ans,2*ctnout+ctnin);
            }
        }
        cout<<ans<<endl;


    }

    return 0;
}




























