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

class B: public BaseClass {
public:
    void print() {
        std::cout << "! print !" << std::endl;
    }

    void BClassPrint() {
        std::cout << "B print" << std::endl;
    }
};

int main() { 
    auto b_class_instance = B();
    
    b_class_instance.BaseClassPrint();
    b_class_instance.print();
    b_class_instance.BClassPrint();
    b_class_instance.BaseClass::print();
}