#include <iostream>

class BaseClass {
public:
    void BaseClassPrint() {
        std::cout << "base class" << std::endl;
    };

    void print() {
        std::cout << "print" << std::endl;
    }
};

class B {
private:
    BaseClass bc;
public: 
    B() {
        this->bc = BaseClass();
    };   

    void print() {
        this->bc.BaseClassPrint();
        this->bc.print();
        std::cout << "other print" << std::endl;
    };   
};

int main() {
    auto b_class_istance = B();
    b_class_istance.print();

    delete B;
}