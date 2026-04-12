#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int f;
    int k;
    cin >> f >> k;
    vector <int> a;
    for (int i = 0; i < f; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end(), greater<int>());
    int sum = 0;
    
    for (int i = 0; i < k; i++) {
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}