#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    if (!(cin >> n >> q)) return 0;

    
    vector<int> a(n + 1);

    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
   
    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            
            int i, v;
            cin >> i >> v;
            a[i] = v;
        }
        else if (type == 2) {
            
            cin >> L >> R;

            int max_sum = -2e9; 

            for (int j = L; j < R; j++) {
                int current_pair_sum = a[j] + a[j + 1];

                if (current_pair_sum > max_sum) {
                    max_sum = current_pair_sum;
                }
            }
            
            cout << max_sum << "\n";
        }
    }
    return 0;
}