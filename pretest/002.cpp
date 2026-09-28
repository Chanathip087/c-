#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[minIndex]) {
                minIndex = j;
            }
        }
        swap(v[i], v[minIndex]);
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}