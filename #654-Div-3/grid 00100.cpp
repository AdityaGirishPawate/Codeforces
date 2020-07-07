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
#define pdqueue priority_queue< int,vi ,greater< > >

#define int long long
//#define int long
typedef tree<int,null_type,less<>,rb_tree_tag,tree_order_statistics_node_update> o_set;
vector<vector<int>> g;
//std::ios::sync_with_stdio(false);
/*
int32_t main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> a(n,vector<int> (n,0));
        if(k<=n){
            rep(i,k)    a[i][i]=1;
        }
        else{
            rep(j,n)    a[j][j]=1;
            k-=n;
            f(i,1,2*(n-1)+1){
                if(k>0){
                    if(i%2){
                        rep(j,n-(i+1)/2){
                            a[j][j+(i+1)/2]=1;
                            k--;
                            if(k==0)    break;
                        }
                    }
                    else{
                        rep(j,n-(i+1)/2){
                            a[j+(i+1)/2][j]=1;
                            k--;
                            if(k==0)    break;
                        }
                    }

                }
                else break;
            }
        }
        rep(i,n){
            rep(j,n){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
}
*/
int32_t main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> a(n,vector<int> (n,0));
        if(k%n==0)  cout<<0<<endl;
        else    cout<<2<<endl;
        int p=0,q=0;
        while(k--){
            a[p][q]=1;
            p++,q++,q%=n;
            if(p==n){
                p=0,q++,q%=n;
            }
        }
        rep(i,n){
            rep(j,n)    cout<<a[i][j];
            cout<<endl;
        }
    }
}






















