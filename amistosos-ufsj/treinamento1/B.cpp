#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(auto i = l; i < r; ++i)
#define MAXN 200010

int n, p;
int x[MAXN], rsum[MAXN], lsum[MAXN];
long acc;
set<array<int,3>> st;

int main()
{
    cin >> n;
    FOR(i,0,n) cin >> x[i];
    
    rsum[0] = x[0];
    lsum[0] = x[n-1];
    FOR(i,1,n) {
        rsum[i] = rsum[i-1]+x[i];
        lsum[i] = lsum[i-1]+x[n-1-i];
    }
    
    FOR(i,0,n/2) {
        st.insert({ -rsum[i]-lsum[n/2-1-(i+1)], i, n/2-1-(i+1)});
    }
    
    int lans = (*st.begin())[1];
    cout << rsum[lans]+lsum[n/2-1-(lans+1)] << endl;
    FOR(i,0,n/2) {
        if(i <= (*st.begin())[1]) cout << "L";
        else cout << "R";
    }
    cout << endl;

    return 0;
}
