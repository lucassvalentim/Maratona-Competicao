#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool comp(pair<int, int>&a,pair<int, int>&b){
    return a.second < b.second;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    ll a, b;
    vector<pair<int, int>>movies;

    for(int i = 0; i < n; i++){
        cin >> a >> b;
        movies.push_back(make_pair(a, b));
    }

    sort(movies.begin(), movies.end(), comp);

    ll fim = movies[0].second;
    int count = 1;

    for(int i = 1; i < n; i++){
        if(movies[i].first >= fim){
            fim = movies[i].second;
            count++;
        }
    }

    cout << count << '\n';
    return 0;
}