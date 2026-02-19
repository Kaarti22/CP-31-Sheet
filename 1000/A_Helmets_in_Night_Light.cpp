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
    void method(vi& a, vi& b, int n, int p){
        vector<pair<int, int>> v;
        rep(i,0,n){
            v.pb({b[i], a[i]});
        }
        sort(all(v));
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        int ans = 0, ind = 0;
        rep(i,0,n){
            int best = LLONG_MAX;
            if(!pq.empty()) best = pq.top().first;
            if(best < p){
                ans += best;
                auto top = pq.top();
                pq.pop();
                top.second--;
                if(top.second > 0) pq.push(top);
            } else {
                ans += p;
            }
            pair<int, int> pi = v[ind++];
            pq.push(pi);
        }
        cout<<ans<<endl;
    }
};

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcase;
    cin>>testcase;
    for(int t=0; t<testcase; t++){
        int n, p;
        cin>>n>>p;
        vi a(n), b(n);
        inpvec(a, n);
        inpvec(b, n);
        Kaarti ob;
        ob.method(a, b, n, p);
    }
    return 0;
}