#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int n, m, k;

bool check(vector<int> order, vector<int> &hierarchy){
    vector<int> cow_to_pos(n, -1);

    for(int i = 0; i < n; i++){
        if(order[i] != -1){
            cow_to_pos[order[i]] = i;
        }
    }

    int h_idx = 0;
    for(int i = 0; i < n && h_idx < m; i++){
        if(cow_to_pos[hierarchy[h_idx]] != -1){
            if(i > cow_to_pos[hierarchy[h_idx]]){return false;}

            i = cow_to_pos[hierarchy[h_idx]];
            h_idx++;
        }else{
            while(i < n && order[i] != -1){i++;}

            if(i == n){return false;}

            order[i] = hierarchy[h_idx];
            cow_to_pos[hierarchy[h_idx]] = i;
            h_idx++;
        }
    }

    return true;
}

int main(){

	freopen("milkorder.in", "r", stdin);
	freopen("milkorder.out", "w", stdout);
    
    cin >> n >> m >> k;

    vector<int> hierarchy(m);
    for(int i = 0; i < m; i++){
        cin >> hierarchy[i];
        hierarchy[i]--;
    }

    vector<int> order(n, -1);
    for(int i = 0; i < k; i++){
        int cow, pos;
        cin >> cow >> pos;

        order[--pos] = --cow;

        if(cow == 0){
            cout << pos + 1 << endl;
            return 0;
        }
    }


    for(int i = 0; i < n; i++){
        if(order[i] == -1){
            order[i] = 0;
            if(check(order, hierarchy)){
                cout << i + 1 << endl;
                break;
            }
            order[i] = -1;
        }
    }

    return 0;
}