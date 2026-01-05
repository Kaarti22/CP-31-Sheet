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
    void method(vi& v, int n, vvi& q){
        vi sum(n + 1);
        sum[0] = 0;
        rep(i,0,n){
            sum[i+1] = sum[i] + v[i];
        }
        int total = sum[n];
        for(auto it: q){
            int l = it[0], r = it[1], k = it[2];
            int val = total - (sum[r] - sum[l-1]) + (r - l + 1) * k;
            if(val & 1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
};

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcase;
    cin>>testcase;
    for(int t=0; t<testcase; t++){
        int n, q;
        cin>>n>>q;
        vi v(n);
        inpvec(v, n);
        vvi queries(q, vi(3));
        rep(i,0,q){
            rep(j,0,3){
                cin>>queries[i][j];
            }
        }
        Kaarti ob;
        ob.method(v, n, queries);
    }
    return 0;
}