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
    void method(vi& v, int n, vi& q){
        map<int, int> m;
        int maxi = 0, sum = 0;
        rep(i,0,n){
            maxi = max(maxi, v[i]);
            sum += v[i];
            m[maxi] = sum;
        }
        for(auto it: q){
            auto val = m.upper_bound(it);
            if(val == m.begin()){
                cout<<0<<" ";
            } else {
                val--;
                cout<<val->second<<" ";
            }
        }
        cout<<endl;
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
        vi queries(q);
        inpvec(queries, q);
        Kaarti ob;
        ob.method(v, n, queries);
    }
    return 0;
}