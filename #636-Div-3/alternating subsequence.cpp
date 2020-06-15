#include <bits/stdc++.h>
using namespace std;
#define int long long
//const int N=1e5;
#define INF 1e6
int32_t main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int a[n];
        int z[n];
        int count=0;
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
            if(a[i]>0)  z[i]=1;
            else    z[i]=0;
            if(i>0){
                if(z[i]!=z[i-1])    count++;
            }
        }
        int arr[count+1];
        for(int i=0;i<count+1;i++)  arr[i]=-1*INF;
        arr[0]=a[0];
        int k=0;
        for (int j = 1; j < n; ++j) {
            if(z[j]!=z[j-1]){
                k++;
                arr[k]=a[j];
            }
            else{
                arr[k]=max(arr[k],a[j]);
            }
        }
        int sum=0;
        for (int l = 0; l < count+1; ++l) {
            sum+=arr[l];
        }
        cout<<sum<<endl;
    }

    return 0;
}


