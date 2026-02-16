#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define MOD 1000000007
#define pb push_back
#define popb pop_back
#define rep(i,a,b) for(int i=a; i<b; i++)
#define all(v) v.begin(),v.end()

void inparr(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void disarr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

void inpvec(vi &v, int n){
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
}

void disvec(vi v, int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<' ';
    }
    cout<<endl;
}

int madd(int a,int b) {
    return (a+b)%MOD;
}

int msub(int a,int b){
    return (((a-b)%MOD)+MOD)%MOD;
}

int mmul(int a,int b){
    return ((a%MOD)*(b%MOD))%MOD;
}

class Kaarti{
public:
    void method(vi& v, int n, int k){
        if(k == 4){
            int even = 0, odd = 0;
            rep(i,0,n){
                if(v[i] & 1) odd++;
                else even++;
            }
            if(even >= 2) cout<<0<<endl;
            else if(even == 1 && odd > 0){
                int four = 0;
                rep(i,0,n){
                    if(v[i] % 4 == 0){
                        cout<<0<<endl;
                        return;
                    }
                }
                cout<<1<<endl;
            } else if(even == 1){
                if(v[0] % 4 == 0) cout<<0<<endl;
                else cout<<4 - (v[0] % 4)<<endl;
            } else {
                if(odd == 1){
                    cout<<4 - (v[0] % 4)<<endl;
                    return;
                }
                int mini = 2;
                rep(i,0,n){
                    mini = min(mini, 4 - (v[i] % 4));
                }
                cout<<mini<<endl;
            }
        } else {
            int mini = k - 1;
            rep(i,0,n){
                if(v[i] % k == 0){
                    cout<<0<<endl;
                    return;
                }
                mini = min(mini, k - (v[i] % k));
            }
            cout<<mini<<endl;
        }
    }
};

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcase;
    cin>>testcase;
    for(int t=0; t<testcase; t++){
        int n, k;
        cin>>n>>k;
        vi v(n);
        inpvec(v, n);
        Kaarti ob;
        ob.method(v, n, k);
    }
    return 0;
}