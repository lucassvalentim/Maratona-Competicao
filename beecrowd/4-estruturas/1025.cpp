#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, q;
    cin >> n >> q;
    
    int count = 1;
    while(n != 0 & q != 0){
        int x;
        vector<int>numeros;
        for(int i = 0; i < n; i++){
            cin >> x;
            numeros.push_back(x);
        }  

        sort(numeros.begin(), numeros.end()); // O(n log n)

        int k;
        cout << "CASE# " << count << ":" << endl;
        for(int i = 0; i < q; i++){
            cin >> x;
            k = lower_bound(numeros.begin(), numeros.end(), x) - numeros.begin();
            if(k < n && numeros[k] == x){
                cout << x << " found at " << k + 1 << endl;
            }else{
                cout << x << " not found" << endl;

            }
        }//O(q log n)

        count++;
        cin >> n >> q;
   }
   
    return 0;
}