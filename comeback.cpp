#include <iostream>
#include <vector>
using namespace std;
int sumarray(vector <int> a) {
    int sum = 0;
    for (int x : a) {
        sum += x;
    }
    return sum;
}
int main() {
    int n;
    vector <int> a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << sumarray(a) << endl;
    return 0;
}