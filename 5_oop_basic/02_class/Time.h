class Time {
private:
    int hours;
    int minutes;
    int seconds;
    
public:
    Time(int h, int m, int s);  // объявляем конструктор
 
    // Объявляем три функции для чтения полей:
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;

    void addSeconds(int); 

    Time operator + (int s) const;
};
