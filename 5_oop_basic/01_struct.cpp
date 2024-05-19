#include <string>;

struct Time {
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
};

struct Info {
    std::string version;
    std::string releaseDate;
    std::string author;
};

int main() {
    Time t;
    t.hours = 42;
    t.minutes = -5;
    t.seconds = 61;

    Info info;
    info.author = "Anton";
    info.version = "1.0.0";
    info.releaseDate = "19.05.2024";
}
