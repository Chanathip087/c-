    #include <iostream>
    using namespace std;
    int gcd(int a, int b) {
        while (b != 0) {
            int c = a % b;
            a = b;
            b = c;
        }
        return a;
    }
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int a, b;
        int GCD = 0;
        int LCM = 0;
        cin >> a >> b;
        int g = gcd(a, b);
        cout << "GCD = " << g << endl;
        cout << "LCM = " << (a / g) * b << endl;
        return 0;
    }