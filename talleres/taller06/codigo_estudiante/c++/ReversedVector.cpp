#include <bits/stdc++.h>

#define D(x) cout << #x << ": " << x << endl;
#define len(x) sizeof(x)/sizeof(x[0])
#define forn(i,n) for(long long i=0; i< (long long)n; i++)
#define for1(i,n) for(int i=1; i<= (int)n; i++)
#define all(v) v.begin(),v.end()

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    cout<< setprecision(20)<< fixed;
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
    #else
        #define endl '\n'
    #endif
    
    vector<int> nums;
    int n;
    //time complexity O(n)
    //memory complexity O(n)
    while (cin >> n){
        if (n != -1){
            ...
        }else{
            ...
            break;
        }
    }
    forn(i,nums.size()){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}