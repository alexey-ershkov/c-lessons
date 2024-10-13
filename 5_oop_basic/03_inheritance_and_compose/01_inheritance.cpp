#include <iostream>

class BaseClass {
public:
    void BaseClassPrint() {
        std::cout << "base class" << std::endl;
    };

    void print() {
        std::cout << "print" << std::endl;
        this->virtualPrint();
    }

    virtual void virtualPrint() = 0;
};

class B: public BaseClass {
public:
    void print() {
        std::cout << "! print !" << std::endl;
    }

    void BClassPrint() {
        std::cout << "B print" << std::endl;
    }

    void virtualPrint() {
        std::cout << "Virtual print B" << std::endl;
    } 
};

class C: public BaseClass { 
     void virtualPrint() {
        std::cout << "Virtual print C" << std::endl;
    } 
};

int main() { 
    auto c = B();
    
    c.BaseClass::print();
}