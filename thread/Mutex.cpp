#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
int sharedData = 0;

void ThreadFunction() {
    for (int i = 0; i < 10000; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        sharedData++;
    }
}

int main() {
    std::thread t1(ThreadFunction);
    std::thread t2(ThreadFunction);

    t1.join();
    t2.join();

    std::cout << "Final sharedData value: " << sharedData << std::endl;

    return 0;
}
