#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M, P;
    cin >> N >> M >> P;

    vector<vector<int>> A(N, vector<int>(M));
    vector<vector<int>> B(M, vector<int>(P));
    vector<vector<int>> C(N, vector<int>(P, 0));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            cin >> B[i][j];
        }
    }
}