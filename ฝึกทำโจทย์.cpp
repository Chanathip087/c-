#include <iostream>
using namespace std;
int solve(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    return solve(n - 1) + solve(n - 2); 
}
int main() {
    int m;
    cin >> m;
    int method = solve(m);
    return 0;
}