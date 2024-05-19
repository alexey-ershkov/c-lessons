#include <iostream>
#include "Time.h" 

void printTime(const Time &time) {
    std::cout << time.getHours() << " "<< time.getMinutes() << " " << time.getSeconds() << std::endl;  
}

int main() {
    Time time(13, 30, 0);  // 13:30:00

    printTime(time);
    time.addSeconds(70);
    printTime(time);
    printTime(time + 90);

    // Time error_time(130, 30, 0);  // 13:30:00
}