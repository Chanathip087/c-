#include <iostream>
using namespace std;
int n;
bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++)  {
        if (n % i == 0) {
            return false;
        }
    } 
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;

    if (is_prime(n)) {
        cout << "prime";
    } else {
        cout << "not prime";
    }
    return 0;
}