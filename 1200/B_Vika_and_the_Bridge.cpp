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
        vvi ind(k+1, vi());
        rep(i,0,n){
            ind[v[i]].pb(i + 1);
        }
        int ans = INT_MAX;
        rep(i,1,k+1){
            vi pos = ind[i];
            pos.insert(pos.begin(), 0);
            pos.pb(n+1);
            vi gaps;
            rep(j,1,(int)pos.size()){
                gaps.pb(pos[j] - pos[j-1]);
            }
            int maxi = *max_element(all(gaps));
            int new_maxi = 0;
            rep(j,0,(int)gaps.size()){
                if(gaps[j] == maxi){
                    int red_gap = gaps[j] / 2;
                    vi temp = gaps;
                    temp[j] = red_gap;
                    temp.insert(temp.begin() + j + 1, gaps[j] - red_gap);
                    new_maxi = *max_element(all(temp));
                    break;
                }
            }
            ans = min(ans, new_maxi - 1);
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
        int n, k;
        cin>>n>>k;
        vi v(n);
        inpvec(v, n);
        Kaarti ob;
        ob.method(v, n, k);
    }
    return 0;
}