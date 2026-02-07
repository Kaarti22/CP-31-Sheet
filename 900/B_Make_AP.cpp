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
    void method(int a, int b, int c){
        int d = c - b;
        int temp = b - d;
        if(temp % a == 0 && (temp / a) > 0){
            cout<<"YES"<<endl;
            return;
        }
        if((c - a) % 2 == 0){
            d = (c - a) / 2;
            temp = a + d;
            if(temp % b == 0 && (temp / b) > 0){
                cout<<"YES"<<endl;
                return;
            }
        }
        d = b - a;
        temp = b + d;
        if(temp % c == 0 && (temp / c) > 0){
            cout<<"YES"<<endl;
            return;
        }
        cout<<"NO"<<endl;
    }
};

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcase;
    cin>>testcase;
    for(int t=0; t<testcase; t++){
        int a, b, c;
        cin>>a>>b>>c;
        Kaarti ob;
        ob.method(a, b, c);
    }
    return 0;
}