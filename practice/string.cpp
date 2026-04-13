#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int n = s.size();  
    bool isPalindrome = true;
    for (int i = 0; i < n / 2; i++) {
        if (tolower(s[i]) != tolower(s[n - 1 - i])) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}