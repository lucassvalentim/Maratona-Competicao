#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

struct costumer{
    ll a, b, index;

    bool operator < (const costumer &other) const{
        if(a == other.a)
            return b < other.b;
        return a < other.a;
    }
};


int main(){

    int n;
    cin >> n;

    vector<costumer> costumers(n);
    for(int i = 0; i < n; i++){
        cin >> costumers[i].a;
        cin >> costumers[i].b;
        costumers[i].index = i;
    }

    sort(costumers.begin(), costumers.end());

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> qr;
    vector<int> rooms_result(n);
    int roomId = 1;

    for(int i = 0; i < n; i++){
        if(qr.size() == 0){
            rooms_result[costumers[i].index] = roomId++;
            qr.push(make_pair(costumers[i].b, roomId - 1));
        }else{
            if(qr.top().first < costumers[i].a){
                pair<ll, ll> x = qr.top();
                qr.pop();
                rooms_result[costumers[i].index] = x.second;
                qr.push(make_pair(costumers[i].b, x.second));
            }else{
                rooms_result[costumers[i].index] = roomId++;
                qr.push(make_pair(costumers[i].b, roomId - 1));
            }
        }
    }

    cout << roomId - 1 << endl;
    for(auto x : rooms_result)
        cout << x << ' ';
    cout << endl;

    return 0;
}