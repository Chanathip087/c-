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

    // รับ A: N แถว M คอลัมน์
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    // รับ B: M แถว P คอลัมน์
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            cin >> B[i][j];
        }
    }

    // คูณเมทริกซ์
    for (int i = 0; i < N; i++) {         // เลือกแถวของ A
        for (int j = 0; j < P; j++) {     // เลือกคอลัมน์ของ B
            for (int k = 0; k < M; k++) { // คูณคู่ทีละตัวแล้วบวกสะสม
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // พิมพ์ C
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}