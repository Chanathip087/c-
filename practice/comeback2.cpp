#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v;
    int n;
    for (int i = 0; i < 3; i++) {
        cin >> n;
        v.push_back(n);
    }
    int max = v[0];
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    cout << max << endl;
    return 0;
}