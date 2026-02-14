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
private:
    int shortestDistance(int x1, int y1, int x2, int y2){
        return abs(x2 - x1) + abs(y2 - y1);
    }

public:
    void method(int n, int m, int x, int y){
        vvi pos = {{1, 1}, {1, m}, {n, 1}, {n, m}};
        vvi ans = {{1, 1}, {1, 1}};
        int dist = 0;
        rep(i,0,4){
            rep(j,0,4){
                int currDist = shortestDistance(x, y, pos[i][0], pos[i][1]);
                currDist += shortestDistance(pos[i][0], pos[i][1], pos[j][0], pos[j][1]);
                currDist += shortestDistance(pos[j][0], pos[j][1], x, y);
                if(currDist > dist){
                    ans = {pos[i], pos[j]};
                    dist = currDist;
                }
            }
        }
        rep(i,0,2){
            rep(j,0,2){
                cout<<ans[i][j]<<" ";
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
        int n, m, x, y;
        cin>>n>>m>>x>>y;
        Kaarti ob;
        ob.method(n, m, x, y);
    }
    return 0;
}