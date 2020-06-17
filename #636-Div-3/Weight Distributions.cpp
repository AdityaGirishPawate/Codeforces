#include <bits/stdc++.h>
using namespace std;
#define int long long
//const int N=1e5;
#define INF 1e9

vector<vector<int>> g;

void bfs(int s,vector<int> &d){
    d[s]=0;
    queue<int> q;
    q.push(s);
    while (!q.empty()){
        int v=q.front();
        q.pop();
        for(auto k:g[v]){
            if(d[k]==INF) {
                d[k] = d[v] + 1;
                q.push(k);
            }
        }
    }
}
int32_t main() {
    int t;
    cin>>t;
    while (t--) {
        int n, m, a, b, c;
        cin >> n >> m >> a >> b >> c;
        --a, --b, --c;
        vector<int> p(m);
        for (auto &it:p) cin >> it;
        sort(p.begin(), p.end());
        vector<int> pref(m+1);
        for (int i = 0; i < m; i++) {
            pref[i+1] = p[i]+pref[i];
        }

        g = vector<vector<int>>(n);
        for (int i = 0; i < m; ++i) {
            int x, y;
            cin >> x >> y;
            --x, --y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        vector<int> da(n, INF), db(n, INF), dc(n, INF);
        bfs(a, da);
        bfs(b, db);
        bfs(c, dc);
        int ans = 1e18;
        for (int j = 0; j < n; ++j) {
            if (da[j] + db[j] + dc[j] > m) continue;
            ans = min(ans, pref[db[j]]+pref[da[j]+db[j]+dc[j]]);
        }
        cout<<ans<<endl;
    }


    return 0;
}



