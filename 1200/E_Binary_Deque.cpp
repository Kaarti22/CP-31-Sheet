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
    void method(vi& v, int n, int s){
        int sum = accumulate(all(v), 0);
        if(s > sum){
            cout<<-1<<endl;
            return;
        }
        sum = 0;
        int maxLen = 0;
        int i = 0, j = 0;
        while(1){
            if(j == n) break;
            while(j < n && sum <= s){
                if(v[j] == 1) sum++;
                j++;
            }
            if(sum > s) maxLen = max(maxLen, j - i - 1);
            else maxLen = max(maxLen, j - i);
            while(i < n && sum > s){
                if(v[i] == 1) sum--;
                i++;
            }
        }
        cout<<n-maxLen<<endl;
    }
};

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcase;
    cin>>testcase;
    for(int t=0; t<testcase; t++){
        int n, s;
        cin>>n>>s;
        vi v(n);
        inpvec(v, n);
        Kaarti ob;
        ob.method(v, n, s);
    }
    return 0;
}