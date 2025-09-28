#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    int n; cin >> n;
    vector<pair<int, int>> points(n);

    for(pair<int, int> &p : points){
        cin >> p.first >> p.second;
    }

    int resultado = 0;
    for(int i = 0; i < n; i++){
        vector<int> neighbors(4, false);
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            if(points[j].first > points[i].first && points[j].second == points[i].second){
                neighbors[1] = true;
            }else if(points[j].first < points[i].first && points[j].second == points[i].second){
                neighbors[2] = true;
            }else if(points[j].first == points[i].first && points[j].second < points[i].second){
                neighbors[3] = true;
            }else if(points[j].first == points[i].first && points[j].second > points[i].second){
                neighbors[0] = true;
            }
        }

        bool supercentral = true;
        for(int k = 0; k < 4; k++){
            if(!neighbors[k]){
                supercentral = false;
                break;
            }
        }

        if(supercentral){
            resultado++;
        }
    }

    cout << resultado << endl;

    return 0;
}