#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector <int> cave(n);
    int pos = -1;

    for (int i = 0; i < n; i++) {
        cin >> cave[i];
        if (cave[i] == 1) {
            pos = i;
        }
    }

    string s;
    cin >> s;

    bool found = false;
    for (char cmd : s) {
        if (found) break;

        int next = pos;
        if (cmd == 'L') next = pos - 1;
        else if (cmd == 'R') next = pos + 1;

        if (next < 0 || next >= n){
            continue;
        }

        if (cave[next] == 2) {
            found = true;
        }

        cave[pos] = 0;
        cave[next] = 1;
        pos = next;


    }

    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << cave[i];
    }
    cout << "\n";

    return 0;
    
}