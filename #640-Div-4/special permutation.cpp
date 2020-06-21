#include <bits/stdc++.h>
using namespace std;
//#define int long long
//const int N=1e5;
#define INF 1e9

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        while(n>10){
            cout<<n<<" ";
            n-=2;
            cout<<n<<" ";
            n-=3;
            cout<<n<<" ";
            n+=4;
            cout<<n<<" ";
            n-=3;
            cout<<n<<" ";
            n-=2;
            cout<<n<<" ";
            n--;
        }
        if(n==10){
            cout<<10<<" "<<8<<" "<<5<<" "<<9<<" "<<7<<" "<<3<<" "<<6<<" "<<2<<" "<<4<<" "<<1<<endl;
        }
        if(n==9){
            cout<<8<<" "<<5<<" "<<9<<" "<<7<<" "<<3<<" "<<6<<" "<<2<<" "<<4<<" "<<1<<endl;
        }
        if(n==8){
            cout<<8<<" "<<5<<" "<<7<<" "<<3<<" "<<6<<" "<<2<<" "<<4<<" "<<1<<endl;
        }
        if(n==7){
            cout<<5<<" "<<7<<" "<<3<<" "<<6<<" "<<2<<" "<<4<<" "<<1<<endl;
        }
        if(n==6){
            cout<<5<<" "<<3<<" "<<6<<" "<<2<<" "<<4<<" "<<1<<endl;
        }
        if(n==5){
            cout<<5<<" "<<3<<" "<<1<<" "<<4<<" "<<2<<endl;
        }
        if(n==4){
            cout<<3<<" "<<1<<" "<<4<<" "<<2<<endl;
        }
        if(n==3 || n==2) cout<<-1<<endl;
        if(n==1) cout<<endl;

    }
    return 0;
}


