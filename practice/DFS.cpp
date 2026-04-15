#include <iostream>
#include <vector>

using namespace std;

int grid[3][3] = {
    {1, 1, 0},
    {0, 0, 1},
    {1, 0, 1}
};
bool visited[3][3];

// ฟังก์ชันมุดเพื่อ "ระบายสี" เกาะ
void dfs(int r, int c) {
    // 1. เช็กเงื่อนไข: ออกนอกตาราง, เจอสีเดิม(visited), หรือเจอน้ำ
    if (r < 0 || r >= 3 || c < 0 || c >= 3 || visited[r][c] || grid[r][c] == 0) {
        return;
    }

    // 2. [การบ้านข้อ 1]: ต้องทำอะไรตรงนี้เพื่อให้รู้ว่ามาถึงแล้ว?
    visited[r][c] = true;

    // 3. มุดไป 4 ทิศ
    dfs(r + 1, c); // ลง
    dfs(r - 1, c); // ขึ้น
    dfs(r, c + 1); // ขวา
    dfs(r, c - 1); // ซ้าย
}

int main() {
    int count = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // 4. [การบ้านข้อ 2]: ถ้าเจอ "ดิน" และ "ยังไม่เคยไป" ให้ทำอะไร?
            if (grid[i][j] == 1 && !visited[i][j]) {
                count++; // เพิ่มจำนวนเกาะ
                dfs(i, j); // สั่งให้มุดไปกาหัวให้ทั่วเกาะ
            }
        }
    }

    cout << "จำนวนเกาะทั้งหมดคือ: " << count << " เกาะ" << endl;
    return 0;
}