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
    void method(int n){
        int mini = -1, maxi = -1;
        if (n & 1) {
            cout<<-1<<endl;
            return;
        }
        if(n % 6 == 0){
            mini = n / 6;
        } else if (n - 4 < 0) {
            cout<<-1<<endl;
            return;
        } else if ((n - 4) % 6 == 0) {
            mini = (n - 4) / 6 + 1;
        } else if (n - 8 < 0) {
            cout<<-1<<endl;
            return;
        } else {
            mini = (n - 8) / 6 + 2;
        }
        if(n % 4 == 0){
            maxi = n / 4;
        } else if (n - 6 < 0) {
            cout<<-1<<endl;
            return;
        } else if ((n - 6) % 4 == 0) {
            maxi = (n - 6) / 4 + 1;
        } else if (n - 12 < 0) {
            cout<<-1<<endl;
            return;
        } else {
            maxi = (n - 12) / 4 + 2;
        }
        cout<<mini<<" "<<maxi<<endl;
    }
};

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcase;
    cin>>testcase;
    for(int t=0; t<testcase; t++){
        int n;
        cin>>n;
        Kaarti ob;
        ob.method(n);
    }
    return 0;
}