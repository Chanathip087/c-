#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n <= 0) return 0;

    vector<int> Fib(n);

    Fib[0] = 0;
    if (n > 1) {
        Fib[1] = 1;
    }

    for (int i = 2; i < n; i++) {
        Fib[i] = Fib[i - 1] + Fib[i - 2];
    }

    for (int i = 0; i < n; i++) {
        cout << Fib[i] << " ";
    }

    return 0;
}