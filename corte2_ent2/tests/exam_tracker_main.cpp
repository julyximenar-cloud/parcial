#include <iostream>
#include "../leetcode/3709_ExamScoreTracker/main.cpp"

int main() {

    ExamTracker tracker;

    tracker.record(1, 10);
    tracker.record(2, 20);
    tracker.record(3, 30);

    std::cout << "Puntaje: "
              << tracker.totalScore(1, 3)
              << std::endl;

    return 0;
}
