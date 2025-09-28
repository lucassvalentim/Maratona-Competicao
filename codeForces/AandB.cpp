#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    int t;
    cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> pb, pa;
        char c; 
        int bi = 0, ai = 0;
        
        for(int i = 0; i < n; i++){
            cin >> c;
            if(c == 'a'){
                pa.push_back(i - ai);
                ai++;
            } else {
                pb.push_back(i - bi);
                bi++;
            }
        }

        int la = 0, lb = 0;
        if(!pa.empty())
            la = pa[pa.size() / 2];
        if(!pb.empty())
            lb = pb[pb.size() / 2];

        ll somaA = 0;
        for(int x : pa) somaA += abs(x - la);

        ll somaB = 0;
        for(int x : pb) somaB += abs(x - lb);

        cout << min(somaA, somaB) << endl;
    }

    return 0;
}