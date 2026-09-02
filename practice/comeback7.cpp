#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    string r;
    getline(cin, s);
    for(int i = s.size() - 1; i >= 0; i--) {    
        r += s[i];
    }
    if (s == r) {
        cout << "palindrome";
    } else {
        cout << "not palindrome";
    }
    return 0;
}