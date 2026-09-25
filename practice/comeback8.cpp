#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int num1[n];
    int num2[n];
    int sum[n];
    for(int i = 0; i < n; i++) {
        cin >> num1[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> num2[i];
    }
    for(int i = 0; i < n; i++) {
        sum[i] = num1[i] + num2[i];
    }
    for(int i = 0; i < n; i++) {
        cout << sum[i] << " ";
    }
    return 0;
}