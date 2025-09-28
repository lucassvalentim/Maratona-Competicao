#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'

int main(){

    int n;
    cin >> n;

    queue<int> even;
    queue<int> odd;

    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x % 2 == 0)
            even.push(x);
        else
            odd.push(x);
    }


    while(even.size() < odd.size()){
        int x1 = odd.front();
        odd.pop();

        int x2 = odd.front();
        odd.pop();

        even.push(x1 + x2);
    }

    while(even.size() - odd.size() > 1){
        int x1 = even.front();
        even.pop();

        int x2 = even.front();
        even.pop();

        even.push(x1 + x2);
    }

    cout << even.size() + odd.size() << endl;
    return 0;
}