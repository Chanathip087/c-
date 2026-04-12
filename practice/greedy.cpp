#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Job {
    int deadline;
    int score;
};

bool cmp(Job a, Job b) {
    return a.score > b.score; // เรียงคะแนนจากมากไปน้อย
}

int main() {
    int n;
    cin >> n;

    vector<Job> jobs(n);
    int maxDeadline = 0;

    for (int i = 0; i < n; i++) {
        cin >> jobs[i].deadline >> jobs[i].score;
        maxDeadline = max(maxDeadline, jobs[i].deadline);
    }

    sort(jobs.begin(), jobs.end(), cmp);

    vector<bool> used(maxDeadline + 1, false);
    int totalScore = 0;

    for (int i = 0; i < n; i++) {
        
        for (int t = jobs[i].deadline; t >= 1; t--) {
            if (!used[t]) {
                used[t] = true;
                totalScore += jobs[i].score;
                break;
            }
        }
    }

    cout << totalScore << endl;

    return 0;
}
