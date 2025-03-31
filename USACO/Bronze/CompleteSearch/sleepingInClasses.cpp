#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int>elsie_logs(n);
        int sum = 0;

        for(int &h : elsie_logs){
            cin >> h;
            sum += h;
        }

        for(int num_hours = 0; num_hours <= sum; num_hours++){
            
            if(num_hours != 0 && sum % num_hours != 0){
                continue;
            }
            
            int curr_sum = 0;
            bool valid = true;

            for(int h : elsie_logs){
                curr_sum += h;
                if(curr_sum > num_hours){
                    valid = false;
                    break;
                }else if(curr_sum == num_hours){
                    curr_sum = 0;
                }
            }

            if(valid){
                if(num_hours == 0){
                    cout << 0 << endl;
                }else{
                    cout << n - (sum/num_hours) << endl;
                }
                break;
            }    
        }
    }

    return 0;
}