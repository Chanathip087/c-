#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> A(2, vector<int>(3));
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}