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
    void method(string& a, string& b){
        unordered_map<char, int> m;
        for(auto it: b){
            m[it]++;
        }
        unordered_map<char, int> count;
        int n = a.size();
        vector<bool> v(n, 0);
        for(int i=n-1; i>=0; i--){
            count[a[i]]++;
            if(count[a[i]] <= m[a[i]]){
                v[i] = 1;
            }
        }
        string s = "";
        rep(i,0,n){
            if(v[i]){
                s.pb(a[i]);
            }
        }
        if(s == b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
};

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcase;
    cin>>testcase;
    for(int t=0; t<testcase; t++){
        string a, b;
        cin>>a>>b;
        Kaarti ob;
        ob.method(a, b);
    }
    return 0;
}