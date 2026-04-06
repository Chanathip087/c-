#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (auto x : s) {
        if (s.count(x) > 0) {
            cout << x << '\n';
        }else {
            cout << "none\n";
        }
    }

    return 0;
}