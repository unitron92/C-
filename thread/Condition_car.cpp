#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool dataReady = false;
int sharedData = 0;

void ProducerThread() {
    // Produce data
    {
        std::unique_lock<std::mutex> lock(mtx);
        sharedData = 42;
        dataReady = true;
    }
    cv.notify_one(); // Notify waiting consumer
}

void ConsumerThread() {
    // Wait for data to be ready
    {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return dataReady; });
    }
    // Consume data
    int value = sharedData;
    std::cout << "ConsumerThread: Received data: " << value << std::endl;
}

int main() {
    std::thread producer(ProducerThread);
    std::thread consumer(ConsumerThread);

    producer.join();
    consumer.join();

    return 0;
}
