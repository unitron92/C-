#include <iostream>
#include <thread>
#include <semaphore.h>

sem_t semaphore;
int sharedData = 0;

void ThreadFunction() {
    for (int i = 0; i < 10000; ++i) {
        sem_wait(&semaphore); // Wait for the semaphore
        sharedData++;
        sem_post(&semaphore); // Release the semaphore
    }
}

int main() {
    sem_init(&semaphore, 0, 1); // Initialize the semaphore
    std::thread t1(ThreadFunction);
    std::thread t2(ThreadFunction);

    t1.join();
    t2.join();

    std::cout << "Final sharedData value: " << sharedData << std::endl;

    sem_destroy(&semaphore); // Destroy the semaphore

    return 0;
}
