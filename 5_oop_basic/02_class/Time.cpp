#include <stdexcept>

#include "Time.h"

Time::Time(int h, int m, int s) {
    if (s < 0 || s > 59) {
        throw std::out_of_range("Wrong seconds!");
    }
    if (m < 0 || m > 59) {
        throw std::out_of_range("Wrong minutes!");
    }
    if (h < 0 || h > 23) {
        throw std::out_of_range("Wrong hours!");
    }

    this->hours = h;
    this->minutes = m;
    this->seconds = s;
}
 
int Time::getHours() const {
    return this->hours;
}
 
int Time::getMinutes() const {
    return this->minutes;
}
 
int Time::getSeconds() const {
    return this->seconds;
}

void Time::addSeconds(int seconds) {
    while (seconds/3600) {
        auto hours = seconds/3600;
        this->hours += hours;
        seconds = seconds - hours*3600;
    }

    while (seconds/60) {
        auto minutes = seconds/60;
        this->minutes += minutes;
        seconds = seconds - minutes*60;
    }

    this->seconds += seconds;
}

Time Time::operator+(int s) const {
    auto time = new Time(this->hours, this->minutes, this->seconds);
    time->addSeconds(s);
    return *time;
}

