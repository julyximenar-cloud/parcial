#include <algorithm>
#include <vector>

using namespace std;

class ExamTracker {
private:
    vector<int> times;
    vector<long long> prefix;

public:
    ExamTracker() {
        times.push_back(0);
        prefix.push_back(0);
    }

    void record(int time, int score) {
        times.push_back(time);
        prefix.push_back(prefix.back() + score);
    }

    long long totalScore(int startTime, int endTime) {
        int left = lower_bound(
            times.begin(),
            times.end(),
            startTime
        ) - times.begin() - 1;

        int right = lower_bound(
            times.begin(),
            times.end(),
            endTime + 1
        ) - times.begin() - 1;

        return prefix[right] - prefix[left];
    }
};
