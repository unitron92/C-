#include <iostream>
#include <thread>
#include <vector>

std::vector<int> sharedData;

void threadFunction() {
    for (int i = 0; i < 5; ++i) {
        sharedData.push_back(i);
    }
}

int main() {
    std::thread t1(threadFunction);
    std::thread t2(threadFunction);

    t1.join();
    t2.join();

    for (int value : sharedData) {
        std::cout << value << " ";
    }
    std::cout << "\n";

    return 0;
}
