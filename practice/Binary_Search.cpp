#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    int target;
    cin >> n >> target;
    vector<int> data;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        data.push_back(x);
    }
    auto lo = lower_bound(data.begin(), data.end(), target);
    auto hi = upper_bound(data.begin(), data.end(), target);
    cout << hi - lo << "\n";
    return 0;
}