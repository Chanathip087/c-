#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int n = s.size();

    string filtered = "";
    for (char c : s) {
        if (isalpha(c))  
        filtered += tolower(c);
   }
 
    bool isPalindrome = true;
    for (int i = 0; i < filtered.size() / 2; i++) {
        if (tolower(filtered[i]) != tolower(filtered[filtered.size() - 1 - i])) {
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