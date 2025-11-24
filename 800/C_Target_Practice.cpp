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
    void method(vector<string>& v){
        int ans = 0;
        rep(i,0,10){
            rep(j,0,10){
                if(v[i][j] == 'X'){
                    int row = min(i + 1, 10 - i);
                    int col = min(j + 1, 10 - j);
                    if(row == 1){
                        ans++;
                    } else if(row == 2){
                        if(col <= 1) ans++;
                        else ans += 2;
                    } else if(row == 3){
                        if(col <= 2) ans += col;
                        else ans += 3;
                    } else if(row == 4){
                        if(col <= 3) ans += col;
                        else ans += 4;
                    } else {
                        ans += col;
                    }
                }
            }
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
        vector<string> v(10);
        rep(i,0,10){
            cin>>v[i];
        }
        Kaarti ob;
        ob.method(v);
    }
    return 0;
}