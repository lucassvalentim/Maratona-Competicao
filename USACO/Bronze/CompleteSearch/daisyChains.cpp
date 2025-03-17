#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long


int main(){
    int n;
    cin >> n;

    vector<int> flowes(n);
    for(auto &f : flowes) cin >> f;

    int sum = 0, cont = n;
    for(int i = 0; i < n; i ++){
        sum += flowes[i];
        for(int j = i + 1; j < n; j++){
            sum += flowes[j];
            for(int k = i; k <= j; k++){
                if(sum % (j - i + 1) != 0) continue;

                if(flowes[k] == sum / (j - i + 1)){
                    cont++;
                    break;
                }
            }
        }
        sum = 0;
    }

    cout << cont << endl;
    return 0;
}